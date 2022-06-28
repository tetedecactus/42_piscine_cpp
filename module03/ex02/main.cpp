/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 11:05:28 by olabrecq         ###   ########.fr       */
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

	firstPerso.attack(secondPerso.getName());
	secondPerso.takeDamage(firstPerso.getAttDamage());
	secondPerso.beRepaired(firstPerso.getAttDamage());
	std::cout << secondPerso.getName() << ": Energy Point = " << secondPerso.getEnergyPoint() << std::endl;
	std::cout << firstPerso.getName() << ": Energie point = " << firstPerso.getEnergyPoint() << std::endl;
	// Faire fonction get stats 
	// Need more test
	return 0;
}