/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:25 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 13:30:26 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

// HumainB  a un Weapon par pointeur et n'est pas toujours armee
HumanB::HumanB( std::string name ) {
    bName = name;
    bWeapon = NULL;
}

HumanB::~HumanB( void ) {

}

void HumanB::attack( void ) {
    std::cout << bName << " attacks with their " << bWeapon->getType() << std::endl;
}

//void HumanB::setWeapon( Weapon weapon ) {
//    this->weapon = weapon;
//}