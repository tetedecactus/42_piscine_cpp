/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/19 21:15:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cout << "Error : Le programme prend juste son executable en parametre" << std::endl;
		return 1;
	}
	std::cout << "====================================" << std::endl;
	ClapTrap* clappy = new ClapTrap("Robert");
	std::cout << "====================================" << std::endl;
	DiamondTrap* diddy = new DiamondTrap;
	std::cout << "====================================" << std::endl;
	
	std::cout << "========== CLAPTRAP STUFF ===========" << std::endl;
	clappy->attack(diddy->getName());
	clappy->beRepaired(25);
	clappy->takeDamage(25);

	printStats(*clappy);
	
	std::cout << "========== DIAMONDTRAP STUFF ===========" << std::endl;
	diddy->attack(clappy->getName());
	diddy->beRepaired(25);
	diddy->takeDamage(25);
	diddy->whoAmI();
	diddy->guardGate();
	diddy->highFivesGuys();

	printStats(*diddy);


	std::cout << "====================================" << std::endl;
	delete clappy;
	std::cout << "====================================" << std::endl;
	delete diddy;
	
}