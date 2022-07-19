/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/19 13:47:06 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( int ac, char **av )
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Ce Programme ne prend que son executable en parametre" << std::endl;
		return 1;
	}
	{
		std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		ClapTrap firstPerso("Jaune-attend Clap-1er du nom");
		ClapTrap secondPerso;

		firstPerso.attack(secondPerso.getName());
		secondPerso.takeDamage(firstPerso.getAttDamage());
		secondPerso.beRepaired(firstPerso.getAttDamage());
		
		printStats(firstPerso);
		printStats(secondPerso);
	}
		std::cout << std::endl;
	{
		std::cout << RED << "Deuxiemne test : 1 est maintenant un pointer de ClapTrap, il attaque 2, 2 ce repair et both print leurs stats\n" << RESET << std::endl;

		ClapTrap* firstPerso = new ClapTrap("Pierre Pointer Clap");
		ClapTrap secondPerso;

		firstPerso->attack(secondPerso.getName());
		secondPerso.takeDamage(firstPerso->getAttDamage());
		secondPerso.beRepaired(50);
		
		printStats(*firstPerso);
		printStats(secondPerso);
		delete firstPerso;
	}
	return 0;
}