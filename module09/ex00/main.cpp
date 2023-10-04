/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:19:52 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:29:42 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, const char **argv)
{
	// BitcoinExchange go;
	if ( argc < 2 ) {
		std::cout << " Error: File name not provided." << std::endl;
	}
	else {
		std::ifstream inputFile;

		inputFile.open(argv[1]);

		if(inputFile.is_open()) {
			std::string line;
			while(std::getline(inputFile, line)) {
				std::cout << line << std::endl;
			}
			inputFile.close();
		}
		else {
			std::cout << "Error: Could not open file." << std::endl;
		}
	}
	
	return (0);	
}


	// check input argv si c'est un input valid
	// ouvre input valide
	// analyse data si elle son valide
	// extrere data valide
	
	// FAIRE LES FUCKING CHOSE A FAIRE BRO !!!!!!