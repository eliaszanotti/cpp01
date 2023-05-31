/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:54:10 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 14:11:35 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

static int	errorCode(void)
{
	std::cerr << "\e[31m[ERROR]\e[0m Usage : ./harlFilter <level>" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (errorCode());
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}