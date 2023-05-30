/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 17:19:54 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Harl.class.hpp"

void Harl::_printLevel(std::string const &level, std::string const &str) const
{
	std::cout << "\e[33m[" << level << "]\e[0m " << str << std::endl;
}

void Harl::_debug(void)
{
	this->_printLevel("DEBUG", "I love having extra bacon for my "\
		"7XL-double-cheese-triple-pickle-special-ketchup burger. "\
		"I really do !");
}

void Harl::_info(void)
{
	this->_printLevel("INFO", "I cannot believe adding extra bacon costs more money. "\
		"You didn’t put enough bacon in my burger ! If you did, I wouldn’t "\
		"be asking for more !");
}

void Harl::_warning(void)
{
	this->_printLevel("WARNING", "I think I deserve to have some extra bacon for free. "\
		"I’ve been coming for years whereas you started working here since "\
		"last month.");
}

void Harl::_error(void)
{
	this->_printLevel("ERROR", "This is unacceptable ! I want to speak to the manager now.");
}

// Print
void Harl::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[Harl] " << reset;
	else
		std::cout << colorsString << "[Harl] " << reset << str << std::endl;
}

// Constructors
Harl::Harl()
{
	this->print("created", 2);
}

Harl::Harl(Harl const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Harl::~Harl()
{
	this->print("deleted", 1);
}

// Operators
Harl const	&Harl::operator=(Harl const &copy)
{
	(void)copy;
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
typedef void (Harl::*tabFunc)(void);

void Harl::complain(std::string level)
{	
	tabFunc		harlMethods[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (levelTab[i].compare(level))
			(this->*harlMethods[i])();
}
