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

class   BitcoinExchange  {
 
    private:
	
		// float 	fValue;
		// std::string sDate;	
		// char *pFileName;
		
    public:
	
		BitcoinExchange( void );
		~BitcoinExchange( void );
		
		void isValidArgs( int argc );
		void parseFile( const char* fileName );
		// void isValidFile( const std::string& fileName );
		static int isValidLine( const std::string& currentLine );
		static bool isValidFirstLine( const std::string& firstLine );

		// parse current line of the input file
		void parseLine( const std::string& currentLine );

		// chek si trop large number, negatif ou si input pas bon (date)
		void openInputFile( char *fileName );
		void stackData( const std::string& currentLine );
		static bool checkPipe( const std::string& currentLine );
		static bool checkSize( const std::string& currentLine );
		static bool checkMaxInt( const std::string& currentLine );
		static bool checkNegatif( const std::string& currentLine );
		static bool checkIsDigit( const std::string& currentLine );
		static bool checkValidDate( const std::string& currentLine );
		std::string checkLineError( const std::string& badLine, const int errorCode );
};


// https://www.w3schools.in/cplusplus/working-with-files
// https://quickref.me/cpp.html
// https://hackingcpp.com/cpp/cheat_sheets.html
// https://en.cppreference.com/w/cpp/container/map
// https://stackoverflow.com/questions/32463297/c-regex-date-search

// Container map