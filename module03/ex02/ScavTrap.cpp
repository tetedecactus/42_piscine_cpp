/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:42:47 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/27 19:42:47 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
}

ScavTrap::~ScavTrap()
{
}


void ScavTrap::guardGate( void ) {
    if (hitPoint > 0 && energyPoint > 0)
        std::cout << RED << "IMP" << name << ": is now in Gate Keeper mode" << RESET << std::endl;
}