/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:36 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 00:11:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Cast.hpp"

#include <iostream>
#include <cstring>
#include <string>

int main ()
{
	std::string str ("Please split this sentence into tokens");

	char * cstr = new char [str.length()+1];
	std::strcpy (cstr, str.c_str());
	
	std::cout << cstr << std::endl;

	// cstr now contains a c-string copy of str

	// char * p = std::strtok (cstr," ");
	// std::cout << cstr << std::endl;

	// while (p!=0)
	// {
	// 	std::cout << p << '\n';
	// 	p = std::strtok(NULL," ");
	// }

	delete[] cstr;
	return 0;
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