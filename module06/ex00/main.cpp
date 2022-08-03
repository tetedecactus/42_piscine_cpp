/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:36 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 10:55:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Cast.hpp"

#include <iostream>
#include <cstring>
#include <string>

int main ()
{
	std::string string("Hello world!");
	std::size_t pos1 = string.find_first_of('w');

	std::size_t pos2 = static_cast<std::size_t>(std::strchr(string.c_str(), 'w') - string.c_str());

	if (pos1 == pos2) {
		std::printf("Both ways give the same result.\n");
	}
}

// int main( int ac, char **av )
// {
	// if (ac != 2)
	// {
	// 	std::cout << RED << "ERROR " << RESET << "To run -> $>: ./cast00 <char/int/float/double/>" << std::endl;
	// 	return 1;
	// }
	// Cast data(av[1]);
	// data.chechArgs();
	
	// std::cout << PINK << "TEST 1 -> CHAR" << RESET << std::endl;
	// try
	// {
	// 	data.printChar();
	// }
	// catch(const std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << PINK << "TEST 2 -> INT" << RESET << std::endl;
	// try{
	// 	data.printInt();
	// }
	// catch(const std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << PINK << "TEST 1 -> FLOAT" << RESET << std::endl;
	// try{
	// 	data.printFloat();
	// }
	// catch(const std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << PINK << "TEST 1 -> DOUBLE" << RESET << std::endl;
	// try{
	// 	data.printDouble();
	// }
	// catch(const std::exception& e){
	// 	std::cerr << e.what() << std::endl;
	// }	
	
	
// 	return 0;
// }