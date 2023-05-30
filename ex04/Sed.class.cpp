/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 16:32:22 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Sed.class.hpp"

// Print
void Sed::print(std::string const &str, int color) const
{
	std::string colorsString = "";
	std::string reset = "\e[0m";
	
	if (color > 0 && color <= 9)
	{
		std::ostringstream oss;
		oss << "\e[3" << color << "m";
		colorsString = oss.str();
	}
	if (str.empty())
		std::cout << colorsString << "[Sed " << this->_filename << "] " << reset;
	else
		std::cout << colorsString << "[Sed " << this->_filename << "] " << reset << str << std::endl;
}

std::string Sed::_openFile(void) const
{
	std::ifstream	inStream(this->_filename.c_str());
	std::string	file;

	if (inStream.is_open() && std::getline(inStream, file, '\0'))
		return (file);
	return ("");	
}

std::string Sed::_replaceInFile(std::string &file) const
{
	size_t	pos = file.find(this->_beforeString);
	while (pos != std::string::npos)
	{
		file.erase(pos, this->_beforeString.length());
		file.insert(pos, this->_afterString);
		pos = file.find(this->_beforeString);
	}
	return (file);
}

void Sed::_createOutfile(std::string const &file) const
{
	std::ofstream	outStream(this->_outfile.c_str( ));

	outStream << file;
	outStream.close();
	this->print("file successfully replaced", 3);
}

void Sed::_errorCode(std::string const &error) const
{
	std::cerr << "\e[31m[ERROR]\e[0m " << error << std::endl;
}

// Constructors
Sed::Sed(std::string const &filename, std::string const &beforeString, std::string const &afterString)
{
	this->_filename = filename;
	this->_beforeString = beforeString;
	this->_afterString = afterString;
	this->_outfile = filename + ".replace";
	this->print("created", 2);
}

Sed::Sed(Sed const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Sed::~Sed()
{
	this->print("deleted", 1);
}

// Operators
Sed const	&Sed::operator=(Sed const &copy)
{
    this->_filename = copy._filename;
	this->_beforeString = copy._beforeString;
	this->_afterString = copy._afterString;
	this->_outfile = copy._outfile;
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void Sed::replaceString(void) const
{
	std::string	file = this->_openFile();

	if (file.empty())
		return (this->_errorCode("Unable to open file"));
	file = this->_replaceInFile(file);
	this->_createOutfile(file);
}