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

HumanB::HumanB(std::string name, weapon weapon) {

}

HumanB::~HumanB() {

}

void HumanB::attack() {
    std::cout << bName << " attacks with their " << weapon.type << std::endl;
}

void HumanB::setWeapon(Weapon weapon) {
    this->weapon = weapon;
}