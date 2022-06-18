/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/14 18:06:01 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Besoin de faire un arrray de pointer sur fonction
int main()
{
	Harl harl;
	std::string input;
	std::cout << "Entre un level de copmlain de harl" << std::endl;
	std::cout << RED << "| debug | info | warning | error |" << RESET << std::endl;
	std::getline( std::cin, input );
	std::cout << "input  = " << input << std::endl;
	harl.complain( input );
}
// ask about pointer to member fonction
// https://stackoverflow.com/questions/2402579/function-pointer-to-member-function