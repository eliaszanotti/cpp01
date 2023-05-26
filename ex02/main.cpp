/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:53:22 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 15:01:30 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "\e[33m[STRING]\e[0m     " << &string << std::endl;
    std::cout << "\e[31m[STRING PTR]\e[0m " << stringPTR << std::endl;
    std::cout << "\e[32m[STRING REF]\e[0m " << &stringREF << std::endl;

    std::cout << "\e[33m[STRING]\e[0m     " << string << std::endl;
    std::cout << "\e[31m[STRING PTR]\e[0m " << *stringPTR << std::endl;
    std::cout << "\e[32m[STRING REF]\e[0m " << stringREF << std::endl;
    return (0);
}