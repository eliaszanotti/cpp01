/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:18:55 by elias             #+#    #+#             */
/*   Updated: 2023/05/30 13:46:18 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"

int main(void)
{
    Weapon  terminator("terminator");
    Weapon  gun;
    {
        HumanA  arnold("arnold", terminator);
        arnold.attack();
        arnold.setWeapon(gun);
        arnold.attack();
    }
    {
        HumanB silvester ("silvester");
        silvester.attack();
        silvester.setWeapon(terminator);
        silvester.attack();
    }
    return (0);
}