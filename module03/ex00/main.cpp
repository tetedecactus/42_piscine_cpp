/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:26:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/23 10:43:48 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap firstPerso("Jaune-attend");
	ClapTrap secondPerso("Not-Brayan");

	firstPerso.attack("Not-Brayan");
	
	return 0;
}