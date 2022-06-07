/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/06 22:14:05 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


// void Phonebook::displayMenu() {
	
// 	std::cout << BLUE << "\t\t      MAIN MENU\n\n" << RESET << std::endl;
// 	std::cout << BLUE << "\t\t📞--->PHONEBOOK<---📞\n" << RESET << std::endl;
// 	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
// 	std::cout << BLUE << "PLEASE ENTER COMMAND\n" << RESET << std::endl;
// 	std::cout << GREEN << "ADD 	-> TO ADD A NEW CONTACT" << RESET << std::endl;
// 	std::cout << YELLOW << "SEARCH	-> TO SEARCH A CONTACT" << RESET << std::endl;
// 	std::cout << RED << "EXIT 	-> TO QUIT THE PHONEBOOK (delete all contact)\n" << RESET << std::endl;
// 	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
// }

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

void Phonebook::displayMenu() {
	
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << BLUE << "\t\t      MAIN MENU\n\n" << RESET << std::endl;
	std::cout << BLUE << "\t\t📞--->PHONEBOOK<---📞\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << BLUE << "PLEASE ENTER COMMAND\n" << RESET << std::endl;
	std::cout << GREEN << "ADD 	-> TO ADD A NEW CONTACT" << RESET << std::endl;
	std::cout << YELLOW << "SEARCH	-> TO SEARCH A CONTACT" << RESET << std::endl;
	std::cout << RED << "EXIT 	-> TO QUIT THE PHONEBOOK (delete all contact)\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
}

void Phonebook::displaySearchMenu() {
	
	std::cout << YELLOW << "|----------|----------|----------|----------|" << RESET <<std::endl;
	std::cout << YELLOW << "|     INDEX|FISRT NAME| LAST NAME|  NICKNAME|" << RESET <<std::endl;
	for (int i = 0; i < nbContact; i ++) {
		
		
		//BESOIN DE WORK SUR UN DISPLAY CONTACT QUI A DU SENSE
		std::cout << YELLOW << "|" << std::setw(10) << (nbContact - i);
		if (contact[i].getFirstName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getFirstName();
		else
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getFirstName().substr(0, 9) << ".";
		if (contact[i].getLastName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getLastName();
		else
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getLastName().substr(0, 9) << ".";
		if (contact[i].getNickName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getNickName() << "|" << << RESET << std::endl;
		else
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getNickName().substr(0, 9) << "." << RESET << std::endl;
	}
	///DEMANDER QUEL INDEX/	contact LUSER VEUX WET GERER LES ERREUR PUIS AFFICHER LE CONTACT 
	std::cout << YELLOW << "|----------|----------|----------|----------|" << RESET <<std::endl;
	std::cout << GREEN << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
	// sleep(3);	
}
//  A FAIRE : update le nombre de contact par rapport a lindex de contact
// pour quand je fait search elle sois upgrade et affiche le bon nombre de contact
// Checker des video sur les setter ans  << RESET