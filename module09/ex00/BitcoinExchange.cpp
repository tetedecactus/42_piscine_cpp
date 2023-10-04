/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:58:55 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/04 13:49:53 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}

void BitcoinExchange::openInputFile( char *fileName ) {
	std::ofstream file;
	file.open(fileName);
}



// ---- Parsing functions -----

void BitcoinExchange::isValidArgs(int argc ) {
	if ( argc < 2 ) {
		std::cout << "Error: File name not provided." << std::endl;
		exit(EXIT_FAILURE);
	}
	else if ( argc > 2) {
		std::cout << "Error: Too many arguments." << std::endl;
		exit(EXIT_FAILURE);
	}
	else {
		EXIT_SUCCESS;
	}
}

void BitcoinExchange::isValidFile( const std::string& fileName ) {
	// instance inputFile
	std::ifstream inputFile;
	
	// open inputFile 
	inputFile.open(fileName);

	// Check open success
	if( inputFile.is_open() ) {
		std::string line;
		
		std::getline(inputFile, line);
		if (BitcoinExchange::isValidFirstLine( line ) == true) {
			while( std::getline(inputFile, line) ) {
				std::cout << line << std::endl;
			}
		}
		else {
			std::cout << "Error: File format not valid." << std::endl;
			exit(EXIT_FAILURE);
		}
		inputFile.close();
		EXIT_SUCCESS;
	}
	else {
		std::cout << "Error: Could not open file." <<std::endl;
		exit(EXIT_FAILURE);
	}
}

bool BitcoinExchange::isValidFirstLine( const std::string& firstLine ) {
	std::string str;
	str = "date | value";

	if( str == firstLine ) {
		return true;
	}
	else {
		return false;
	}
}

