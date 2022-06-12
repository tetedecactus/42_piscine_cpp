/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/07 11:49:05 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
			std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl; sleep(3);
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
	std::cout << YELLOW << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << RESET <<std::endl;
	std::cout << YELLOW << "|----------|----------|----------|----------|" << RESET <<std::endl;
	for (int i = 0; i < nbContact; i++) {
		
		std::cout << YELLOW << "|" << std::setw(10) << (i + 1);
		if (contact[i].getFirstName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getFirstName();
		else
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getFirstName().substr(0, 9) << ".";
		if (contact[i].getLastName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getLastName();
		else
			std::cout << YELLOW << std::setw(10) << contact[i].getLastName().substr(0, 9) << ".";
		if (contact[i].getNickName().length() <= 10)
			std::cout << YELLOW << "|" << std::setw(10) << contact[i].getNickName() << "|" << RESET << std::endl;
		else
			std::cout << YELLOW << std::setw(10) << contact[i].getNickName().substr(0, 9) << "." << RESET << std::endl;
		std::cout << YELLOW << "|----------|----------|----------|----------|" << RESET <<std::endl;
	}
}
void Phonebook::displayContact(int indexContact) {
	
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << PINK << "CONTACT NUMBER : \t" << BLUE << indexContact << std::endl;
	std::cout << PINK << "CONTACT FIRST NAME: \t" << BLUE << contact[indexContact - 1].getFirstName() << std::endl;
	std::cout << PINK << "CONTACT LAST NAME: \t" << BLUE << contact[indexContact - 1].getLastName() << std::endl;
	std::cout << PINK << "CONTACT NICKNAME: \t" << BLUE << contact[indexContact - 1].getNickName() << std::endl;
	std::cout << PINK << "CONTACT PHONE NUMBER: \t" << BLUE << contact[indexContact - 1].getPhoneNumber() << std::endl;
	std::cout << PINK << "CONTACT DARKEST SECRET: " << BLUE << contact[indexContact - 1].getDarkestSecret() << std::endl;
}
