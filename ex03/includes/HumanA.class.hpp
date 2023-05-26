/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 16:38:02 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include <iostream>
# include "Weapon.class.hpp"

class HumanA
{
	private:
		std::string	 _name;
		Weapon	&_weapon;
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		HumanA(std::string const &name, Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		HumanA(HumanA const &copy);
		~HumanA();

		// Operators
		HumanA const	&operator=(HumanA const &copy);
 
		// Methods
		
		// Getters
		Weapon	*getWeapon(void) const;
		std::string	getName(void) const;

		// Setters
		void	setWeapon(Weapon &weapon);
		void	setName(std::string const &name);
};

#endif