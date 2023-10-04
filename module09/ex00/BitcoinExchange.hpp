/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/04 14:04:14 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include	<iostream>
#include	<fstream>
#include 	<cstring>
#include	<map>
#include 	<chrono>
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
		void isValidFile( const std::string& fileName );
	static bool isValidFirstLine( const std::string& firstLine );
		void openInputFile( char *fileName );
};


// https://www.w3schools.in/cplusplus/working-with-files
// https://quickref.me/cpp.html
// https://hackingcpp.com/cpp/cheat_sheets.html
// https://en.cppreference.com/w/cpp/container/map

// Container deque ou map