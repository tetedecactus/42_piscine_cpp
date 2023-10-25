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

BitcoinExchange::BitcoinExchange( int argc ) {
	if ( isValidArgs( argc ) ) {
        parseDB("data.csv");
        // parseFile(argv[1]);
    }
    return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}
                                         
// ---- Parsing functions -----
bool BitcoinExchange::isValidArgs(int argc ) {
	if ( argc < 2 ) 
		throw std::runtime_error ("Error: File name not provided.");
	if ( argc > 2) 
		throw std::runtime_error("Error: Too many arguments.");
	else 
		return true;
}


void BitcoinExchange::parseDB( const char* dataBaseFile ) {
    std::ifstream dbFile( dataBaseFile );

    if (!dbFile.is_open()) {
        std::cerr << "Error: Could not open the data base." << std::endl;
        return;
    }
    
    std::string dbLine;
    std::getline(dbFile, dbLine);

    std::string sDate;
    float fValue;

    while (std::getline(dbFile, dbLine)) {
        sDate =  extractDateData( dbLine );
        fValue =  extractFloatData( dbLine );
        stackData( sDate, fValue );
    }
    dbFile.close();
}

void BitcoinExchange::parseInputFile(const char* fileName) {
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

        std::string sDate;
        float fValue;

        while (std::getline(inputFile, line)) {
            try {
                if (parseLine(line) == true) {
                    sDate = extractDateData(line);
                    fValue = extractFloatData(line);
                    searchStackDate(sDate, fValue);
                }
            } catch (const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    inputFile.close();
}

void BitcoinExchange::searchStackDate(const std::string &sDate, float fValue) {
    std::map<std::string, float>::iterator it;
    for (it = maLine.begin(); it != maLine.end(); ++it) {
        // Comparer sDate avec it->first (la clé, c'est-à-dire la date)
        if (it->first == sDate) {
            std::cout << "fValue: " << fValue << std::endl;
            // std::cout << it->first << " " << std::fixed << std::setprecision(2) << it->second << std::endl;
            // std::cout << sDate << " " << std::fixed << std::setprecision(2) << fValue - it->second << std::endl;
            // std::cout << "Found" << std::endl;
            std::cout << it->first << " => " << fValue << " => " << std::fixed << std::setprecision(2) << it->second * fValue << std::endl;
            // calculDateValue(sDate, fValue);
            return; // Sortir de la fonction dès que la date est trouvée
        if (it->first != sDate) {
            searchClosestDate(sDate, fValue);
        }

            break; // Sortir de la boucle dès que la date est dépassée
        }
    }

    // Si la date n'est pas trouvée
    std::cout << "Date not found Exact" << std::endl;
}

void BitcoinExchange::searchClosestDate(const std::string& sDate, float fValue) {
    (void)fValue;
    std::map<std::string, float>::iterator it;
    for (it = maLine.begin(); it != maLine.end(); ++it) {
        // Comparer sDate avec it->first (la clé, c'est-à-dire la date)
        if (it->first > sDate) {
            // std::cout << it->first << " " << std::fixed << std::setprecision(2) << it->second << std::endl;
            // std::cout << sDate << " " << std::fixed << std::setprecision(2) << fValue - it->second << std::endl;
            std::cout << "Closest" << std::endl;
            return; // Sortir de la fonction dès que la date est trouvée
        }
    }

    // Si la date n'est pas trouvée
    std::cout << "Date not found Closest" << std::endl;
}

// void BitcoinExchange::calculDateValue( const std::string& sDate, float fValue) {

// }
bool BitcoinExchange::parseLine(const std::string& currentLine) {
	int errorCode;
    errorCode = isValidLine(currentLine);
    
    if (errorCode != 1) {
        std::string errorString = checkLineError(currentLine, errorCode);
        throw std::runtime_error(errorString);
        return false;
    }
    return true;
}

std::string BitcoinExchange::extractDateData( const std::string& dbLine ) {
    size_t pos = dbLine.find(',');

    if ( pos != std::string::npos ) {
        std::string sDate = dbLine.substr(0, pos);
        return sDate;
    }
    // si trouve par ',' alors cherche par '|'
    if ( pos == std::string::npos ) {
        std::string sDate = dbLine.substr(0, 10);
        return sDate;
    }
    return "";
}


float BitcoinExchange::extractFloatData( const std::string& dbLine ) {
    size_t pos = dbLine.find(',');

    if ( pos != std::string::npos ) {
        std::string fString = dbLine.substr(pos + 1);
        
        std::istringstream ss(fString);
        float fValue = 0.0f;

        ss >> fValue;

        return fValue;
    }
    if ( pos == std::string::npos ) {
        std::string fString = dbLine.substr(11);
        
        std::istringstream ss(fString);
        float fValue = 0.0f;

        ss >> fValue;
        return fValue;
    }
    return -1;
}


void BitcoinExchange::stackData( const std::string& sDate, float fValue ) {
    maLine[sDate] = fValue;
	// std::cout << maLine[currentLine] << std::endl;ma
}

std::string BitcoinExchange::checkLineError( const std::string& badLine, const int errorCode ) {
	if ( errorCode == 2 )
		return ( "Error: Bad input => " + badLine );
	if ( errorCode == 3 )
		return ( "Error: Not a positive number.");
	return ( "" );
}

int BitcoinExchange::isValidLine(const std::string& currentLine) {
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

bool BitcoinExchange::checkValidDate( const std::string& currentLine ) {
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

bool BitcoinExchange::checkNegatif( const std::string& currentLine ) {
    return ( currentLine.at( 13 ) == '-' );
}

bool BitcoinExchange::checkIsDigit( const std::string& currentLine ) {
    return ( !isdigit( currentLine.at( 13 ) ) && currentLine.at( 13 ) != '-' );
}

bool BitcoinExchange::isValidFirstLine( const std::string& firstLine ) {
    return ( firstLine == "date | value" );
}

bool BitcoinExchange::checkPipe( const std::string& currentLine ) {
    return ( currentLine.at( 11 ) != '|' );
}

bool BitcoinExchange::checkSize( const std::string& currentLine ) {
    return ( currentLine.size() < 13 );
}

//  SETTERR

const std::map< std::string, float >& BitcoinExchange::getMaLine( void ) const {
    return maLine;
}

// GETTERRR

void BitcoinExchange::setMaLine( const std::map< std::string, float >&newMapLine ) {
    maLine = newMapLine;
}

