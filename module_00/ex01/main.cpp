/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/06 14:13:19 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


void Phonebook::displayMenu() {
	
	std::cout << BLUE << "\t\t      MAIN MENU\n\n" << RESET << std::endl;
	std::cout << BLUE << "\t\t📞--->PHONEBOOK<---📞\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << BLUE << "PLEASE ENTER COMMAND\n" << RESET << std::endl;
	std::cout << GREEN << "ADD 	-> TO ADD A NEW CONTACT" << RESET << std::endl;
	std::cout << YELLOW << "SEARCH	-> TO SEARCH A CONTACT" << RESET << std::endl;
	std::cout << RED << "EXIT 	-> TO QUIT THE PHONEBOOK (delete all contact)\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
}

int main ()
{
	Phonebook phonebook;
	
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
			std::cout << RED << "WRONG INPUT YOU DUMP ASS" << std::endl;
			sleep(2);
			std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
			sleep(3);
		}
	}
	
  return 0;
}
//  A FAIRE : update le nombre de contact par rapport a lindex de contact
// pour quand je fait search elle sois upgrade et affiche le bon nombre de contact
// Checker des video sur les setter ans  << RESET