/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:58:55 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:26:42 by olabrecq         ###   ########.fr       */
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

bool BitcoinExchange::isValidFile( const char * fileName ) {
	std::ifstream inputFile;

	inputFile.open(fileName);

	if( inputFile.is_open() ) {
		std::string line;

		while( std::getline(inputFile, line) ) {
			std::cout << line << std::endl;
		}
		inputFile.close();
		return true;
	}
	else {
		std::cout << "Error: Could not open file." <<std::endl;
		return (false);
	}
}