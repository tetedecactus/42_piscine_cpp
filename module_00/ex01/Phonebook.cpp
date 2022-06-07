/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/06 15:58:09 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {

	std::cout << "Constructor Phonebook called" << std::endl;
	input = "";
	nbContact = 0;
}

Phonebook::~Phonebook() {

	std::cout  << "Destructor Phonebook called" << std::endl;
}


// void Phonebook::displayContact(int indexContact) {
	
// }

// addContact is my setContact[] 
void Phonebook::addContact() {
	
    int i = 0;
	nbContact++;
	// nbContact.setNbContact(i);
	std::cout << BLUE << "\t\t📞--->NEW CUNTACT<---📞\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << BLUE << "PLEASE ENTER CUNTACT INFORMATION\n"<< RESET << std::endl;
	std::cout << GREEN << "\tCUNTACT NUMBER#" << contact->getIndexContact() << std::endl;
	
    //First name
	std::cout << PINK << "NEW CUNTACT FIRST NAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) == true && input.empty() == false)
		contact[i].setFirstName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Last name
	std::cout << PINK << "NEW CUNTACT LAST NAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) == true && input.empty() == false)// doit virifier que le input est pas null
		contact[i].setLastName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Nick name
	std::cout << PINK << "NEW CUNTACT NICKNAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) == true && input.empty() == false)
		contact[i].setNickName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Phone number
	std::cout << PINK << "NEW CUNTACT PHONE NUMBER:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsDigit(input) == true && input.empty() == false)
		contact[i].setPhoneNumber(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [0-9]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Darkest secret
	std::cout << PINK << "NEW CUNTACT DARKEST SECRET:" << GREEN << std::endl;
	std::getline(std::cin, input);
	contact[i].setDarkestSecret(input);
    //---------------------------------------------------------
    std::cout << "\033[0;35mNEW CONTACT INFO:\n" << std::endl;
    std::cout << "\033[0;35mFIRST NAME:\n" << contact[i].getFirstName() << std::endl;
    std::cout << "\033[0;35mLAST NAME:\n" << contact[i].getLastName() << std::endl;
    std::cout << "\033[0;35NICKNAME:\n" << contact[i].getNickName() << std::endl;
    std::cout << "\033[0;35mPHONENUMBER:\n" << contact[i].getPhoneNumber() << std::endl;
    std::cout << "\033[0;35mDARKEST SECRET:\n" << contact[i].getDarkestSecret() << std::endl;
	//---------------------------------------------------------
    i++;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << GREEN << "NEW CUNTACT ADDED" << RESET << std::endl;
	std::cout << GREEN << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
	sleep(3);
}

// Getter de contact[]
void Phonebook::searchContact() {
	
	if (nbContact == 0)
	{
		std::cout << RED << "You need to add some contact before searching one you stupid fucking cunt\n" << RESET << std::endl;
		sleep(3);	
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
	}
	std::cout << YELLOW << "|----------|----------|----------|----------|" << RESET <<std::endl;
	std::cout << YELLOW << "|     INDEX|FISRT NAME| LAST NAME|  NICKNAME|" << RESET <<std::endl;

	//BESOIN DE WORK SUR UN DISPLAY CONTACT QUI A DU SENSE
	std::cout 	<< YELLOW 
				<< "| " << nbContact << " " << "|"
				<< contact[0].getFirstName()
				<< contact[0].getLastName()
				<< contact[0].getNickName() << std::endl;

	std::cout << GREEN << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
	sleep(3);	
}

// void Phonebook::findContact() {
	
// }

bool Phonebook::stringIsAlpha(std::string& input) {

	for (int i = 0; i < (int)input.size(); i++) {
		if (isalpha(input[i]) == 0)
			return false;
	}
	return true;
}

bool Phonebook::stringIsDigit(std::string& input) {
	
	for (int i = 0; i < (int)input.size(); i++) {
		if (isdigit(input[i]) == 0)
			return false;
	}
	return true;
}