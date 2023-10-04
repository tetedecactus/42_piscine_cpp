/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:58:55 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:26:42 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	return ;
}

BitcoinExchange::~BitcoinExchange( void ) {
	return ;
}

void BitcoinExchange::openInputFile( char *fileName ) {
	std::ofstream file;
	file.open(fileName);
}

// bool BitcoinExchange::isValidArg( int argc, char **argv ) {
// 	(void)argv;

// 	if (argc > 1) 
// 		return false;
// 	return true;
// }

// bool isValidArg( int argc, char **argv ) {
// 	(void)argv;

// 	if (argc > 1) 
// 		return false;
// 	return true;
// }