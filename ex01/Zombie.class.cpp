/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 14:41:25 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Zombie.class.hpp"

// Print
void Zombie::print(std::string str, int color) const
{
	std::string colorsString;
	std::string reset = "\e[0m";

	if (color > 0 && color <= 9)
	{
		std::ostringstream oss;
		oss << "\e[3" << color << "m";
		colorsString = oss.str();
	}
	else
		colorsString = "";
	std::cout << colorsString << "[Zombie " << this->_name << "] " << reset << str << std::endl;
}

// Constructors
Zombie::Zombie()
{
	this->_name = "Will Smith";
	this->print("created", 2);
}

Zombie::Zombie(std::string const &name)
{
	this->_name = name;		
	this->print("created", 2);
}

Zombie::Zombie(Zombie const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Zombie::~Zombie()
{
	this->print("deleted", 1);
}

// Operators
Zombie const	&Zombie::operator=(Zombie const &copy)
{
	this->_name = copy.getName();
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void	Zombie::announce(void) const
{
	this->print("BraiiiiiiinnnzzzZ...", 3);
}

// Getters
std::string Zombie::getName(void) const
{
    return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}