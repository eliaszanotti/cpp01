/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 16:38:10 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "HumanA.class.hpp"

// Print
void HumanA::print(std::string const &str, int color) const
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
	std::cout << colorsString << "[HumanA " << this->_name << "] " << reset << str << std::endl;
}

// Constructors
HumanA::HumanA(std::string const &name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	this->print("created", 2);
}

HumanA::HumanA(HumanA const &copy): _weapon(copy._weapon)
{
	*this = copy;
	this->print("created by copy", 2);
}

HumanA::~HumanA()
{
	this->print("deleted", 1);
}

// Operators
HumanA const	&HumanA::operator=(HumanA const &copy)
{
	this->_name = copy._name;
	this->_weapon = copy._weapon;
	this->print("created by assignment", 2);
	return (*this);
}

// Methods

// Getters
Weapon *HumanA::getWeapon(void) const
{
    return (&this->_weapon);
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}

// Setters
void HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void	HumanA::setName(std::string const &name)
{
	this->_name = name;
}