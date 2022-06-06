/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 20:11:32 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int main ()
{
	Phonebook phonebook;
	
	// int i = 0;
	while (1)
	{
		phonebook.displayMenu();
		
		std::getline(std::cin, phonebook.input);
		if (phonebook.input == "ADD")
			phonebook.addContact();
		else if (phonebook.input == "SEARCH")
			phonebook.searchContact();
		else if (phonebook.input == "EXIT")
			break;
		else
		{
			std::cout << "\033[0;31mWrong command you dump ass" << std::endl;
			sleep(2);
			std::cout << "\033[0;31mRETURNING TO MAIN MENU . . .\n\033[0m" << std::endl;
			sleep(3);
		}
	}
	
  return 0;
}
//  A FAIRE : update le nombre de contact par rapport a lindex de contact
// pour quand je fait search elle sois upgrade et affiche le bon nombre de contact
// Checker des video sur les setter ans getter
