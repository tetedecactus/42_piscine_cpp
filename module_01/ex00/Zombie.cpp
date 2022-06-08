/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:46:54 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/07 20:46:22 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) {
	name = zombieName;
	std::cout << YELLOW << name <<" :IM ALIVEEEE BITCHIIZZZZ" << RESET << std::endl;
}

Zombie::~Zombie() {
	std::cout << YELLOW << "NoooooooOo Zombie : " << name << RESET;
	std::cout << RED << " is dead... so ... r.i.p again i guess ?" << RESET << std::endl;
}

void Zombie::announce(void) {
	std::cout << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

// Zombie* Zombie::newZombie(std::string name) { 
// 	return (zombie);
// }