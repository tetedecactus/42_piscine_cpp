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

int main()
{
	Harl harl;
	std::string input;
	std::cout << "Entre un level de copmlain de harl" << std::endl;
	std::cout << RED << "| debug | info | warning | error |" << RESET << std::endl;
	std::getline( std::cin, input );
	harl.complain( input );
	return 0;
}