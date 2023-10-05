/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:19:52 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/04 14:05:54 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, const char **argv)
{
	BitcoinExchange btc_data;
	btc_data.isValidArgs( argc );
	btc_data.isValidFile( argv[1] );
	

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


	// ---- a faire ----
		// chek si la premier ligne de input file doit imperativement date | value ?
		// faire split au |
		// changer les value pour des float, string -> float
		// stocker dans une map<std:string, float> 
		// figure out quoi faire ensuite...
		// check avant || apres l'affichage si la date est reel et 
			// si le float est positif et pas trop gros
		// check la data avec les date = ou < que la date de inputFile
		// multiplier le prix de cette dans avec le float (nb de btc)
		// output le fucking result style : date => value = price
			// 2011-01-03 => 3 = 0.9
		// ou output l'erreur de la line soit date, value or both
		// fin


	// FAIRE LES FUCKING CHOSE A FAIRE, SAC A PAPIER !!!!!!