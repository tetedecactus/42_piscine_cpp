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

BitcoinExchange::BitcoinExchange( int argc, const char **argv ) 
{

	if ( isValidArgs( argc ) )
    {
        parseFile( argv[1] );

    }
    
}

BitcoinExchange::~BitcoinExchange( void ) 
{
	return ;
}

const std::map< std::string, int >& BitcoinExchange::getMaLine( void ) const {
    return maLine;
}

void BitcoinExchange::setMaLine( const std::map< std::string, int >&newMapLine ) {
    maLine = newMapLine;
}

// ---- Parsing functions -----
bool BitcoinExchange::isValidArgs(int argc ) 
{
	if ( argc < 2 ) 
		throw std::runtime_error ("Error: File name not provided.");
	if ( argc > 2) 
		throw std::runtime_error("Error: Too many arguments.");
	else 
		return true;
}

void BitcoinExchange::parseFile(const char* fileName) 
{
    std::ifstream inputFile(fileName);
    
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return;
    }
    
    try {
        std::string line;
        std::getline(inputFile, line);

        if (!isValidFirstLine(line)) 
            throw std::runtime_error("Error: Not a valid file format.");

        while (std::getline(inputFile, line)) {
            try {
                parseLine(line);
                checkValidDate(line);
            } catch (const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    inputFile.close();
}

void BitcoinExchange::parseLine(const std::string& currentLine) {
	int errorCode = isValidLine(currentLine);
    
    if (errorCode != 1) 
	{
        std::string errorString = checkLineError(currentLine, errorCode);
        // throw std::runtime_error(errorString);
        stackData( errorString, errorCode );
    }

    stackData( currentLine, errorCode );
}

void BitcoinExchange::stackData( const std::string& currentLine, int errCode )
{
    maLine[currentLine] = errCode;
	// std::cout << maLine[currentLine] << std::endl;
}

std::string BitcoinExchange::checkLineError( const std::string& badLine, const int errorCode )
{
	if ( errorCode == 2 )
		return ( "Error: Bad input => " + badLine );
	if ( errorCode == 3 )
		return ( "Error: Not a positive number." + badLine );
	return ( "" );
}

int BitcoinExchange::isValidLine(const std::string& currentLine) 
{
    if (BitcoinExchange::checkSize(currentLine))
        return 2; // Taille incorrecte.
    else if (BitcoinExchange::checkPipe(currentLine))
        return 2; // Absence de caractères '|'.
    else if (BitcoinExchange::checkIsDigit(currentLine))
        return 2; // Caractères non numériques.
    else if (!BitcoinExchange::checkValidDate(currentLine))
        return 2; // Date invalide.
    else if (BitcoinExchange::checkNegatif(currentLine))
        return 3; // Valeur négative.
    else
        return 1; // Tout est valide.
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
	std::string yearStr = currentLine.substr( 0, 4 );
	std::string monthStr = currentLine.substr( 5, 2 );
	std::string dayStr = currentLine.substr( 8, 2);

	std::time_t timeLive;
	std::tm *timeInfo;

	time(&timeLive);

	timeInfo = std::localtime( &timeLive );

	int todayYear;
	int todayMonth;
	int todayDay;

	todayYear = timeInfo->tm_year + 1900;
	todayMonth = timeInfo->tm_mon + 1;
	todayDay = timeInfo->tm_mday;

	int yearInt = std::atoi(yearStr.c_str());
	int monthInt = std::atoi(monthStr.c_str());
	int dayInt = std::atoi(dayStr.c_str());

    if (yearInt > todayYear || yearInt < 2008 || monthInt > 12 || dayInt > 31)
        return false;
    if (yearInt == todayYear && (monthInt > todayMonth || (monthInt == todayMonth && dayInt > todayDay)))
		return false;
	
	return true;
}