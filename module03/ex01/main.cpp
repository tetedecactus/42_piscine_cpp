/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 16:03:17 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//  Il s’appellera ScavTrap et héritera des constructeurs et du destructeur de
// ClapTrap. Toutefois, ses constructeurs, son destructeur et son attack() afficheront des
// messages différents. Après tout, les ClapTraps sont conscients de leur individualité.

int main( int ac, char **av )
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Ce Programme ne prend que son executable en parametre" << std::endl;
		return 1;
	}
	
	//===================== TEST 1 =============================

	ClapTrap firstPerso("Jaune-attend Clap-1er du nom");
	ClapTrap secondPerso;

	std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats" << RESET << std::endl;
	firstPerso.attack(secondPerso.getName());
	secondPerso.takeDamage(firstPerso.getAttDamage());
	secondPerso.beRepaired(firstPerso.getAttDamage());
	firstPerso.printStats();
	secondPerso.printStats();
	
	//=================== TEST 2 ===============================
	
	ScavTrap perso1("Willy Scav");
	ScavTrap perso2;
	std::cout << RED << "Deuxieme test : Creer 2 perso de class ScavTrap...." << RESET << std::endl;
	perso1.printStats();
	perso2.printStats();
	perso1.guardGate();
	perso1.attack(perso2.getName());
	perso2.takeDamage(perso1.getAttDamage());
	perso2.beRepaired(5);
	perso1.printStats();
	perso2.printStats();

	firstPerso.attack(secondPerso.getName());
	secondPerso.takeDamage(firstPerso.getAttDamage());
	secondPerso.beRepaired(5);
	firstPerso.printStats();
	secondPerso.printStats();
	
	//===================
	return 0;
}