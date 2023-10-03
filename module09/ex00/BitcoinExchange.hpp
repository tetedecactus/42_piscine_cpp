/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:33:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <iostream>
#include <fstream>

class   BitcoinExchange  {
    private:
	
		float 	fValue;
		std::string sDate;	
		char *pFileName;
		
    public:
	
		BitcoinExchange( void );
		
		void openInputFile( char *fileName);
		
		
};


// https://www.w3schools.in/cplusplus/working-with-files
// https://quickref.me/cpp.html
// https://hackingcpp.com/cpp/cheat_sheets.html