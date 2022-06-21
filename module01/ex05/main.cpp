/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/20 14:20:33 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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