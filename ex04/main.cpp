/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:54:10 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 15:59:54 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.class.hpp"

static int	errorCode(std::string const &str)
{
	std::cerr << "\e[31m[ERROR]\e[0m " << str << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (errorCode("Usage : ./sed <filename> <string 1> <string 2>"));
    Sed sed(argv[1], argv[2], argv[3]);
    sed.replaceString();
    return (0);
}