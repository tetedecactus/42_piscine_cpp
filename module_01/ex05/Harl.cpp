/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:06:59 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/14 18:50:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void ) {
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info( void ) {
	std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"	<< RESET << std::endl;
}

void Harl::warning( void ) {
	std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error( void ) {
	std::cout << BLUE << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain( std::string level) {
	void (*ptrFunction[])(void) = Harl::{debug(), Harl::info(), Hrl::warning(), Harl::error()};

	switch ( level )
	{
	case "debug":
		debug();
		break;
		
	case "info":
		info();
		break;

	case "warning":
		warning();
	break;

	case "error":
		error();
		break;
	default: std::cout << "Please add a valid level" << std::endl;
		break;
	}
	
}