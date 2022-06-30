/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/27 19:37:05 by olabrecq         ###   ########.fr       */
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
	ClapTrap firstPerso("Jaune-attend Clap-1er du nom");
	ClapTrap secondPerso("Not-Brayan Clap-2e du nom");

	std::cout << RED << "Premier test : 1 attaque 2, 2 ce repair et both print leurs stats" << RESET << std::endl;
	firstPerso.attack(secondPerso.getName());
	secondPerso.takeDamage(firstPerso.getAttDamage());
	secondPerso.beRepaired(firstPerso.getAttDamage());
	firstPerso.printStats();
	secondPerso.printStats();
	return 0;
}