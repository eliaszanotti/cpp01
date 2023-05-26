/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombiesFunctions.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:19:04 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 14:26:22 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_FUNCTIONS_HPP
# define ZOMBIES_FUNCTIONS_HPP

# include <iostream>
# include "Zombie.class.hpp"

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif