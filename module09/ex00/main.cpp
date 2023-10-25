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

int main(int argc, const char **argv) {
	try {
		BitcoinExchange btc_data(argc);
		btc_data.parseInputFile(argv[1]);


		// std::map<std::string, float> maMap = btc_data.getMaLine();
		// std::map<std::string, float>::iterator it;
		// for (it = maMap.begin(); it != maMap.end(); it++) {
		// 	std::cout << "Cle: " << it->first << "Value: " << std::fixed << std::setprecision(2) << it->second << std::endl;
		// }
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
	return (0);	
}
