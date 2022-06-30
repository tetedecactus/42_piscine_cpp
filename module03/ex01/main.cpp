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
	// {
	// 	std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	ClapTrap firstPerso("Jaune-attend Clap-1er du nom");
	// 	ClapTrap secondPerso;

	// 	firstPerso.attack(secondPerso.getName());
	// 	secondPerso.takeDamage(firstPerso.getAttDamage());
	// 	secondPerso.beRepaired(firstPerso.getAttDamage());
	// 	firstPerso.printStats();
	// 	secondPerso.printStats();
	// }
	// 	std::cout << std::endl;
	// {
	// 	std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, il attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	ClapTrap* firstPerso = new ClapTrap("Pierre Pointer Clap");
	// 	ClapTrap secondPerso;

	// 	firstPerso->attack(secondPerso.getName());
	// 	secondPerso.takeDamage(firstPerso->getAttDamage());
	// 	secondPerso.beRepaired(50);
	// 	firstPerso->printStats();
	// 	secondPerso.printStats();
	// 	delete firstPerso;
	// }
	std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	//=================== TEST 2 ===============================
	
	{
		std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		ScavTrap firstPerso("Jean Scav");
		ScavTrap secondPerso;

		firstPerso.attack(secondPerso.getName());
		secondPerso.takeDamage(firstPerso.getAttDamage());
		secondPerso.beRepaired(firstPerso.getAttDamage());
		firstPerso.printStats();
		secondPerso.printStats();
	}
		std::cout << std::endl;
	{
		std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, 2 Pointer de ScavTrap, 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		ClapTrap* firstPerso = new ScavTrap("Etienne Scav Pointer");
		ScavTrap* secondPerso = new ScavTrap;

		firstPerso->attack(secondPerso->getName());
		secondPerso->takeDamage(firstPerso->getAttDamage());
		secondPerso->beRepaired(50);
		firstPerso->printStats();
		secondPerso->printStats();
		delete firstPerso;
		delete secondPerso;
	}
	std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	
	return 0;
}