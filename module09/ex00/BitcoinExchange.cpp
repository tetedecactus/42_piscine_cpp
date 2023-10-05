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

BitcoinExchange::BitcoinExchange( void ) 
{
	return ;
}

BitcoinExchange::~BitcoinExchange( void ) 
{
	return ;
}

void BitcoinExchange::openInputFile( char *fileName ) 
{
	std::ofstream file;
	file.open(fileName);
}



// ---- Parsing functions -----

void BitcoinExchange::isValidArgs(int argc ) 
{
	try	
	{
		if ( argc < 2 ) 
			throw std::runtime_error ("Error: File name not provided.");
		if ( argc > 2)
			throw std::runtime_error("Error: Too many arguments.");
	} 
	catch( const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit( EXIT_FAILURE );
	}
}

// void BitcoinExchange::isValidFile( const std::string& fileName ) {
// 	// instance inputFile
// 	std::ifstream inputFile;
	
// 	// open inputFile 
// 	inputFile.open(fileName);

// 	// Check open success
// 	if( inputFile.is_open() ) {
// 		std::string line;
		
// 		std::getline(inputFile, line);
// 		if (BitcoinExchange::isValidFirstLine( line ) == true) {
// 			while( std::getline(inputFile, line) ) {
// 				std::cout << line << std::endl;
// 			}
// 		}
// 		else {
// 			std::cout << "Error: File format not valid." << std::endl;
// 			exit(EXIT_FAILURE);
// 		}
// 		inputFile.close();
// 		EXIT_SUCCESS;
// 	}
// 	else {
// 		std::cout << "Error: Could not open file." <<std::endl;
// 		exit(EXIT_FAILURE);
// 	}
// }

void BitcoinExchange::isValidFile( const char* fileName ) {
	std::ifstream inputFile;
	
	try {
		inputFile.open( fileName );

		if ( !inputFile.is_open() )
		{
			throw std::runtime_error( "Error: Could not open the file." );
		}

		std::string line;
		std::getline( inputFile, line );

		if( !BitcoinExchange::isValidFirstLine( line ) )
		{
			throw std::runtime_error( "Error: Not a valid file format." );
		}

		while ( std::getline( inputFile, line ) ) 
		{
			parseLine( line );
		}
	} 
	catch ( const std::exception& e ) 
	{
		std::cout << e.what() << std::endl;
	}
	inputFile.close();
}

void BitcoinExchange::parseLine( const std::string& currentLine ) 
{
	if ( !BitcoinExchange::isValidLine( currentLine ) )
	{
		//  check the error et print le message adapter
		std::cout << "Error: Not a valid line." << std::endl;
	}
	else
	{
		// extract date et value et put dans map
		std::cout << currentLine << std::endl;
	}
}

void BitcoinExchange::checkLineError( const std::string& badLine, const int errorCode )
{
	(void)badLine;
	(void)errorCode;
}

bool BitcoinExchange::isValidFirstLine( const std::string& firstLine )
{
	return ( firstLine == "date | value" );
}

int BitcoinExchange::isValidLine( const std::string& currentLine )
{
	if( currentLine.size() < 13 || currentLine.at(11) != '|' )
		return 2;
	// if ( currentLine.at(11) != '|' ) 
	// 	return false;
	else 
		return 1;
}

