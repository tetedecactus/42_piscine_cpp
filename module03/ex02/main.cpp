/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/21 12:11:19 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	std::cout << BLUE << "==========================================================================" << RESET << std::endl;
	
	{
		std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		FragTrap firstPerso("Charlotte cool a l'os");
		std::cout << BLUE << "==========================================================================" << RESET << std::endl;
		FragTrap secondPerso;
		std::cout << BLUE << "==========================================================================" << RESET << std::endl;

		firstPerso.attack(secondPerso.getName());
		secondPerso.takeDamage(firstPerso.getAttDamage());
		secondPerso.beRepaired(firstPerso.getAttDamage());
		firstPerso.highFivesGuys();
		printStats(firstPerso);
		printStats(secondPerso);
	}
		std::cout << std::endl;
	{
		std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, et 2 pointer de FragTrap, 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		ClapTrap* firstPerso = new FragTrap("Robert Frag Pointer");
		std::cout << BLUE << "==========================================================================" << RESET << std::endl;
		FragTrap* secondPerso = new FragTrap;
		std::cout << BLUE << "==========================================================================" << RESET << std::endl;

		firstPerso->attack(secondPerso->getName());
		secondPerso->takeDamage(firstPerso->getAttDamage());
		secondPerso->beRepaired(50);
		secondPerso->highFivesGuys();
		printStats(*firstPerso);
		printStats(*secondPerso);
		delete firstPerso;
		std::cout << BLUE << "==========================================================================" << RESET << std::endl;
		delete secondPerso;
	}

	return 0;
}