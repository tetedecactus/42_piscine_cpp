/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 13:30:32 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
HumanA::HumanA(std::string name, Weapon weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
    std::cout << aName << " attacks with their " << weapon.type << std::endl;
}
