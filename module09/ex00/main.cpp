/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:19:52 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/26 16:27:46 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, const char **argv) {
	
	{
		std::cout << "Constructors with no Args" << std::endl;
		// Constructors 1
		try 
		{
			BitcoinExchange btc_data;
	
			if (btc_data.isValidArgs(argc) == false)
				throw std::invalid_argument("Invalid number of arguments");
			else 
				btc_data.parseDB("data.csv");
			btc_data.parseInputFile(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << "-----------------------------------------" << std::endl;

	{
		std::cout << "Constructors with Args" << std::endl;
		//Constructors 2
		try 
		{
			BitcoinExchange btc_data(argc);
			btc_data.parseInputFile(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << "-----------------------------------------" << std::endl;

	{
		// Constructors 3
		std::cout << "Copy Constructor" << std::endl;
		try
		{
			BitcoinExchange src;
			BitcoinExchange btc_data(src);
			
			if (btc_data.isValidArgs(argc) == false)
				throw std::invalid_argument("Invalid number of arguments");
			else 
				btc_data.parseDB("data.csv");
			btc_data.parseInputFile(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << "-----------------------------------------" << std::endl;
	
	{
		
		// Operateur d'affectation
		std::cout << "Assignation Operator" << std::endl;
		try
		{
			BitcoinExchange src;
			BitcoinExchange btc_data;
			
			if (btc_data.isValidArgs(argc) == false)
				throw std::invalid_argument("Invalid number of arguments");
			else 
				btc_data.parseDB("data.csv");
			btc_data.parseInputFile(argv[1]);
			btc_data = src;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (0);	
	
}
