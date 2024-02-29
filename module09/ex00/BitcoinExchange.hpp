/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/01 12:31:04 by olabrecq         ###   ########.fr       */
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
	
		std::map< std::string, float > maLine;	
		
    public:
	
		BitcoinExchange( void );
		BitcoinExchange( int argc );
		BitcoinExchange( BitcoinExchange const & src );
		BitcoinExchange& operator=( BitcoinExchange const & rhs );
		~BitcoinExchange( void );
		
		const std::map< std::string, float>& getMaLine( void ) const;
		void setMaLine( const std::map< std::string, float >& newMapLine );
		
		bool parseLine (const std::string& currentLine );
		void parseInputFile( const char* fileName );
		
		void searchStackDate( const std::string & sDate, float fValue );
		std::string searchClosestDate( const std::string & sDate);
		
		void stackData( const std::string& sDate, float fValue );
		void parseDB( const char* dataBaseFile );
		std::string checkLineError( const std::string& badLine, const int errorCode );
		
		
		std::string extractDateData( const std::string& dvLine );
		
		inline bool isBisex(int year);
		static bool checkPipe( const std::string& currentLine );
		static bool checkSize( const std::string& currentLine );
		static bool checkNegatif( const std::string& currentLine );
		static bool checkIsDigit( const std::string& currentLine );
		static bool checkMaxInt( float fValue );
		static bool checkValidDate( const std::string& currentLine );
		static bool isValidFirstLine( const std::string& firstLine );
		static bool isValidArgs( int argc );
		
		float extractFloatData( const std::string& dbLine );
		int isValidLine( const std::string& currentLine );
		
		std::string searchClosestYear( const std::string& sDate);
		std::string searchClosestMonth( const std::string& sDate, std::string sYear);
		std::string searchClosestDay( const std::string& sDate, std::string sYear, std::string sMonth);

};
