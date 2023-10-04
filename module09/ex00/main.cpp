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
	
	now = std::chrono::system_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(now);

    // Convertissez le temps en une chaîne de caractères formatée
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&time_now));

    // Affichez la date et l'heure actuelles
    std::cout << "Date et heure actuelles : " << buffer << std::endl;
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