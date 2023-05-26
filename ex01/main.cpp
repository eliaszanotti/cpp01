/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:26:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 14:44:37 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"

int main()
{
    Zombie  *horde = zombieHorde(15, "member");

    for (int i = 0; i < 15; i++)
        horde[i].announce();
    delete [] (horde);
    return (0);
}