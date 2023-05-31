/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 17:17:41 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

# include <iostream>

class Harl
{
	private:
        void	_printLevel(std::string const &level, std::string const &str) const;
        void	_debug(void);
        void	_info(void);
		void	_warning(void);
		void	_error(void);
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Harl();
		Harl(Harl const &copy);
		~Harl();

		// Operators
		Harl const	&operator=(Harl const &copy);

		// Methods
		void	complain(std::string level);
};

#endif