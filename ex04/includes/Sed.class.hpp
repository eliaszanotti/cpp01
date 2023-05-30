/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 16:28:35 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_CLASS_H
# define SED_CLASS_H

# include <iostream>
# include <fstream>

class Sed
{
	private:
		std::string	_filename;
		std::string	_beforeString;
		std::string	_afterString;
		std::string	_outfile;
		// Print
		void	print(std::string const &str, int color) const;
		// Methods
		std::string	_openFile(void) const;
        std::string _replaceInFile(std::string &file) const;
		void	_createOutfile(std::string const &file) const;
        void	_errorCode(std::string const &error) const;
		
	public:
		// Constructors
		Sed(std::string const &filename, std::string const &beforeString, std::string const &afterString);
		Sed(Sed const &copy);
		~Sed();

		// Operators
		Sed const	&operator=(Sed const &copy);

		// Methods
		void	replaceString(void) const;
};

#endif