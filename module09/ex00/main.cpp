/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:19:52 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/05 15:56:32 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, const char **argv)
{
	BitcoinExchange btc_data;
	btc_data.isValidArgs( argc );
	btc_data.parseFile( argv[1] );
	

	std::time_t time_ow;
    std::tm *time_info;

    // Obtenez le temps actuel en secondes depuis l'époque (Unix timestamp)
    time(&time_ow);

    // Convertissez le temps en une structure tm pour obtenir des informations sur la date et l'heure
    time_info = std::localtime(&time_ow);

    // Affichez la date et l'heure actuelles en utilisant un format personnalisé
    std::cout << "Date et heure actuelles : ";
    std::cout << time_info->tm_year + 1900 << '-' << time_info->tm_mon + 1 << '-'
              << time_info->tm_mday << ' ' << time_info->tm_hour << ':'
              << time_info->tm_min << ':' << time_info->tm_sec << std::endl;
	return (0);	
}
