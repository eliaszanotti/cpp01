/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 17:10:42 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

# include <iostream>
# include "Weapon.class.hpp"

class HumanB
{
	private:
		std::string	 _name;
		Weapon	*_weapon;
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		HumanB(std::string const &name);
		HumanB(HumanB const &copy);
		~HumanB();

		// Operators
		HumanB const	&operator=(HumanB const &copy);
 
		// Methods
		void	attack(void) const;
		
		// Getters
		Weapon	*getWeapon(void) const;
		std::string	getName(void) const;

		// Setters
		void	setWeapon(Weapon &weapon);
		void	setName(std::string const &name);
};

#endif