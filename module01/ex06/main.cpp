/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/20 13:23:59 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Besoin de faire un arrray de pointer sur fonction
int main()
{
	Harl harl;
	std::string input;
	std::cout << "Entre un level de copmlain de harl" << std::endl;
	std::cout << RED << "| DEBUG | INFO | WARNING | ERROR |" << RESET << std::endl;
	std::getline( std::cin, input );
	harl.complain( input );
	return 0;
}