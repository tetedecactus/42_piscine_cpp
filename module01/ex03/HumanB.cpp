/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:25 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/20 13:34:46 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
    bName = name;
    bWeapon = NULL;
}

HumanB::~HumanB( void ) {

}

void HumanB::attack( void ) {
	if (bWeapon == NULL) {
		std::cout << bName << " has no weapon" << std::endl;
		return ;
	}
    std::cout << bName << " attacks with their " << bWeapon->getType() << std::endl;
}

//void HumanB::setWeapon( Weapon weapon ) {
//    this->weapon = weapon;
//}