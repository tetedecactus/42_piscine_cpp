/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:28:22 by olabrecq         ###   ########.fr       */
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