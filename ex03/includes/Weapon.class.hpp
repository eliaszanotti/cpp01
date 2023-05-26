/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 15:14:30 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <iostream>

class Weapon
{
	private:
		std::string	_type;
		// Print
		void	print(std::string str, int color) const;

	public:
		// Constructors
		Weapon();
		Weapon(std::string const &type);
		Weapon(Weapon const &copy);
		~Weapon();

		// Operators
		Weapon const	&operator=(Weapon const &copy);

		// Methods
		
		// Getters and Setters
		std::string	getType(void) const;
		void	setType(std::string type);
};

#endif