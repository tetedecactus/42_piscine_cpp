/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/04 14:57:40 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


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
	// std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	// //=================== TEST 2 ===============================
	
	// {
	// 	std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	ScavTrap firstPerso("Jean Scav");
	// 	ScavTrap secondPerso;

	// 	firstPerso.attack(secondPerso.getName());
	// 	secondPerso.takeDamage(firstPerso.getAttDamage());
	// 	secondPerso.beRepaired(firstPerso.getAttDamage());
	// 	firstPerso.printStats();
	// 	secondPerso.printStats();
	// }
	// 	std::cout << std::endl;
	// {
	// 	std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, il attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	ClapTrap* firstPerso = new ScavTrap("Etienne Scav Pointer");
	// 	ScavTrap* secondPerso = new ScavTrap;

	// 	firstPerso->attack(secondPerso->getName());
	// 	secondPerso->takeDamage(firstPerso->getAttDamage());
	// 	secondPerso->beRepaired(50);
	// 	firstPerso->printStats();
	// 	secondPerso->printStats();
	// 	delete firstPerso;
	// 	delete secondPerso;
	// }
	// std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	
	// {
	// 	std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	FragTrap firstPerso("Charlotte cool a l'os");
	// 	FragTrap secondPerso;

	// 	firstPerso.attack(secondPerso.getName());
	// 	secondPerso.takeDamage(firstPerso.getAttDamage());
	// 	secondPerso.beRepaired(firstPerso.getAttDamage());
	// 	firstPerso.printStats();
	// 	secondPerso.printStats();
	// }
	// 	std::cout << std::endl;
	// {
	// 	std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, et 2 pointer de FragTrap, 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

	// 	ClapTrap* firstPerso = new ScavTrap("Robert Frag Pointer");
	// 	FragTrap* secondPerso = new FragTrap;

	// 	firstPerso->attack(secondPerso->getName());
	// 	secondPerso->takeDamage(firstPerso->getAttDamage());
	// 	secondPerso->beRepaired(50);
	// 	firstPerso->printStats();
	// 	secondPerso->printStats();
	// 	delete firstPerso;
	// 	delete secondPerso;
	// }

	std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	
	{
		std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;
		std::cout << BLUE << "======================================================================" << RESET << std::endl;
		DiamondTrap firstPerso("Charlotte cool a l'os");
		std::cout << BLUE << "======================================================================" << RESET << std::endl;
		DiamondTrap secondPerso;
		std::cout << BLUE << "======================================================================" << RESET << std::endl;

		firstPerso.attack(secondPerso.getName());
		secondPerso.takeDamage(firstPerso.getAttDamage());
		secondPerso.beRepaired(firstPerso.getAttDamage());
		firstPerso.printStats();
		secondPerso.printStats();

		std::cout << "first perso name = " << firstPerso.getName() << std::endl;
	}
		std::cout << std::endl;
	// {
	// 	std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ScavTrap, et 2 pointer de FragTrap, 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;
	// 	ScavTrap* firstPerso = new DiamondTrap("Robert Frag Pointer");
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;
	// 	FragTrap* secondPerso = new DiamondTrap;
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;

	// 	firstPerso->attack(secondPerso->getName());
	// 	secondPerso->takeDamage(firstPerso->getAttDamage());
	// 	secondPerso->beRepaired(50);
	// 	firstPerso->printStats();
	// 	secondPerso->printStats();
	// 	delete firstPerso;
	// 	delete secondPerso;
	// }
	// {
	// 	std::cout << RED << "Troisieme test : 1 est maintenant un pointer de ClapTrap, et 2 pointer de Diamond, 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;
	// 	ClapTrap* firstPerso = new DiamondTrap("Robert Frag Pointer");
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;
	// 	DiamondTrap* secondPerso = new DiamondTrap;
	// 	std::cout << BLUE << "======================================================================" << RESET << std::endl;

	// 	firstPerso->printStats();
	// 	secondPerso->printStats();
	// 	firstPerso->attack(secondPerso->getName());
	// 	secondPerso->takeDamage(firstPerso->getAttDamage());
	// 	secondPerso->beRepaired(50);
	// 	firstPerso->printStats();
	// 	secondPerso->printStats();
	// 	secondPerso->guardGate();
	// 	secondPerso->highFivesGuys();
	// 	secondPerso->whoAmI();
	// 	secondPerso->getName();
		
	// 	delete firstPerso;
	// 	delete secondPerso;
	// }

	return 0;
}