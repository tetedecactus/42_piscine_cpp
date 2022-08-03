/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:36 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 16:24:40 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"


int main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << RED << "ERROR " << RESET << "To run -> $>: ./cast00 <char/int/float/double/>" << std::endl;
		return 1;
	}
	Cast data(av[1]);
	
	// std::cout << PINK << "TEST 1 -> CHAR" << RESET << std::endl;
	std::cout << BLUE << "Char : " << RESET;
	try
	{
		data.printChar();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	// std::cout << PINK << "TEST 2 -> INT" << RESET << std::endl;
	std::cout << BLUE << "Int : " << RESET;
	try{
		data.printInt();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	// std::cout << PINK << "TEST 3 -> FLOAT" << RESET << std::endl;
	std::cout << BLUE << "FLOAT : " << RESET;
	try{
		data.printFloat();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	// std::cout << PINK << "TEST 4 -> DOUBLE" << RESET << std::endl;
	std::cout << BLUE << "Double : " << RESET;
	try{
		data.printDouble();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	
	
	return 0;
}