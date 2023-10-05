/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:58:55 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/05 17:43:33 by olabrecq         ###   ########.fr       */
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

void BitcoinExchange::parseFile( const char* fileName ) 
{
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
			BitcoinExchange::checkValidDate( line );
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
	try
	{
		int errorCode;
		errorCode = BitcoinExchange::isValidLine( currentLine );
		if ( errorCode != 1  )
		{
			std::string errorString;
			errorString = checkLineError( currentLine, errorCode );
			throw std::runtime_error( errorString );
		}
		
		stackData( currentLine );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}

void BitcoinExchange::stackData( const std::string& currentLine )
{
	std::cout << currentLine << std::endl;
}

std::string BitcoinExchange::checkLineError( const std::string& badLine, const int errorCode )
{
	if ( errorCode == 2 )
	{
		return ( "Error: Bad input => " + badLine );
	}
	if ( errorCode == 3 )
	{
		return ( "Error: Not a positive number." );
	}
	return ( "" );
}

int BitcoinExchange::isValidLine( const std::string& currentLine )
{
	if( BitcoinExchange::checkSize( currentLine ) || BitcoinExchange::checkPipe( currentLine ) || BitcoinExchange::checkIsDigit( currentLine ) )
		return ( 2 );
	if ( BitcoinExchange::checkNegatif( currentLine ) )
		return ( 3 );
	else 
		return ( 1 );
}

bool BitcoinExchange::checkNegatif( const std::string& currentLine )
{
	return ( currentLine.at( 13 ) == '-' );
}

bool BitcoinExchange::checkIsDigit( const std::string& currentLine )
{
	return ( !isdigit( currentLine.at( 13 ) ) && currentLine.at( 13 ) != '-' );
}

bool BitcoinExchange::isValidFirstLine( const std::string& firstLine )
{
	return ( firstLine == "date | value" );
}

bool BitcoinExchange::checkPipe( const std::string& currentLine )
{
	return ( currentLine.at( 11 ) != '|' );
}

bool BitcoinExchange::checkSize( const std::string& currentLine )
{
	return ( currentLine.size() < 13 );
}

bool BitcoinExchange::checkValidDate( const std::string& currentLine )
{
	std::string yearStr;
	std::string monthStr;
	std::string dayStr;

	yearStr = currentLine.substr( 0, 4 );
	std::cout << yearStr << std::endl;
	monthStr = currentLine.substr( 5, 2 );
	std::cout << monthStr << std::endl; 
	dayStr = currentLine.substr( 8, 2);
	std::cout << dayStr << std::endl;
	return true;
}