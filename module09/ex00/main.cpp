/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:19:52 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/03 17:29:42 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, const char **argv)
{
	// BitcoinExchange btc_data;
	if ( argc < 2 ) {
		std::cout << " Error: File name not provided." << std::endl;
	}
	else {
		std::ifstream inputFile;
		
		inputFile.open(argv[1]);

		if(inputFile.is_open()) {
			std::string line;
			while(std::getline(inputFile, line)) {
				std::cout << line << std::endl;
			}
			inputFile.close();
		}
		else {
			std::cout << "Error: Could not open file." << std::endl;
		}
	}
	
	return (0);	
}


	// ---- a faire ----
		// chek si la premier ligne de input file doit imperativement date | value ?
		// faire split au |
		// changer les value pour des float, string -> float
		// stocker dans deque<std::string> & deque<float> date value
		// OU
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