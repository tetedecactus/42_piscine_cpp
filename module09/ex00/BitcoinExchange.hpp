/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/05 15:57:19 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include	<iostream>
#include	<fstream>
#include 	<cstring>
#include	<map>
#include 	<cstdlib>
#include	<ctime>
#include	<string>
#include 	<sstream>	
#include 	<iomanip>

class   BitcoinExchange  {
 
    private:
	
		// float 	fValue;
		// std::string sDate;	
		// char *pFileName;
		std::map< std::string, float > maLine;	
    public:

		BitcoinExchange( int argc );
		~BitcoinExchange( void );

		void setMaLine( const std::map< std::string, float >& newMapLine );
		const std::map< std::string, float>& getMaLine( void ) const;

		static bool isValidArgs( int argc );
		void parseInputFile( const char* fileName );
		void calculDateValue( const std::string& sDate, float fValue );
		bool parseLine (const std::string& currentLine );
		void searchStackDate( const std::string & sDate, float fValue );
		void searchClosestDate( const std::string & sDate, float fValue );
		float extractFloatData( const std::string& dbLine );
		std::string extractDateData( const std::string& dvLine );

	// chek si trop large number, negatif ou si input pas bon (date)
		void stackData( const std::string& sDate, float fValue );
		static bool checkPipe( const std::string& currentLine );
		static bool checkSize( const std::string& currentLine );
		// static bool checkMaxInt( const std::string& currentLine );
		static bool checkNegatif( const std::string& currentLine );
		static bool checkIsDigit( const std::string& currentLine );
		static bool checkValidDate( const std::string& currentLine );
		std::string checkLineError( const std::string& badLine, const int errorCode );
		int isValidLine( const std::string& currentLine );
		static bool isValidFirstLine( const std::string& firstLine );

		void parseDB( const char* dataBaseFile );

};

// https://www.w3schools.in/cplusplus/working-with-files
// https://quickref.me/cpp.html
// https://hackingcpp.com/cpp/cheat_sheets.html
// https://en.cppreference.com/w/cpp/container/map

// Container map