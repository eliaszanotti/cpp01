/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:26:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 14:25:49 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"
#include "ZombiesFunctions.hpp"

int main()
{
    Zombie  will;
    Zombie  zombie("zombie...");
    Zombie  *myZombie = newZombie("John");
    
    will.announce();
    zombie.announce();	
	myZombie->announce();
	randomChump("Doe");
	delete (myZombie);
    return (0);
}