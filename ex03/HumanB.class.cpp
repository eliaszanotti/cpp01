/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 13:52:42 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "HumanB.class.hpp"

// Print
void HumanB::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[HumanB " << this->_name << "] " << reset;
	else
		std::cout << colorsString << "[HumanB " << this->_name << "] " << reset << str << std::endl;
}

// Constructors
HumanB::HumanB(std::string const &name)
{
	this->_name = name;
	this->_weapon = NULL;
	this->print("created", 2);
}

HumanB::HumanB(HumanB const &copy): _weapon(copy._weapon)
{
	*this = copy;
	this->print("created by copy", 2);
}

HumanB::~HumanB()
{
	this->print("deleted", 1);
}

// Operators
HumanB const	&HumanB::operator=(HumanB const &copy)
{
	this->_name = copy._name;
	this->_weapon = copy._weapon;
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void HumanB::attack(void) const
{
	this->print("", 3);
	if (!this->_weapon)
		std::cout << "has no weapon" << std::endl;
	else
		std::cout << "attacks with their " << this->_weapon->getType() << std::endl;
}

// Getters
Weapon *HumanB::getWeapon(void) const
{
    return (this->_weapon);
}

std::string HumanB::getName(void) const
{
    return (this->_name);
}

// Setters
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::setName(std::string const &name)
{
	this->_name = name;
}