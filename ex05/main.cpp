/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:54:10 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 17:10:36 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main(void)
{
    Harl harl1;
    harl1.complain("DEBUG");
    Harl harl2;
    harl2.complain("INFO");
    Harl harl3;
    harl3.complain("WARNING");
    Harl harl4;
    harl4.complain("ERROR");
    return (0);
}