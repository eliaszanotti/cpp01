/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 14:14:04 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <iostream>

class Zombie
{
	private:
		std::string	_name;
		// Print
		void	print(std::string str, int color) const;

	public:
		// Constructors
		Zombie();
		Zombie(std::string const &name);
		Zombie(Zombie const &copy);
		~Zombie();

		// Operators
		Zombie const	&operator=(Zombie const &copy);

		// Methods 
		void	announce(void) const;
		
		// Getters
		std::string	getName(void) const;
};

#endif