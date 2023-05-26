/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 15:18:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Weapon.class.hpp"

// Print
void Weapon::print(std::string str, int color) const
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
	std::cout << colorsString << "[Weapon " << this->_type << "] " << reset << str << std::endl;
}

// Constructors
Weapon::Weapon()
{
	this->_type = "default weapon";
	this->print("created", 2);
}

Weapon::Weapon(std::string const &type)
{
	this->_type = type;
	this->print("created", 2);
}

Weapon::Weapon(Weapon const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Weapon::~Weapon()
{
	this->print("deleted", 1);
}

// Operators
Weapon const	&Weapon::operator=(Weapon const &copy)
{
	this->_type = copy.getType();
	this->print("created by assignment", 2);
	return (*this);
}

// Methods

// Getters and Setters
std::string Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}