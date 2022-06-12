/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/07 12:47:52 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	input = "";
	nbContact = 0;
}

Phonebook::~Phonebook() {
}

// addContact is my setContact[] 
void Phonebook::addContact() {
	
	Contact newContactTmp;
    int i = 0;
	if (nbContact == 8) {
		while (i < nbContact - 1) {
			contact[i] = contact[i + 1];
			i++;
		}
	}
	std::cout << BLUE << "\t\t📞--->NEW CONTACT<---📞\n" << RESET << std::endl;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << BLUE << "PLEASE ENTER CONTACT INFORMATION\n"<< RESET << std::endl;
	
	std::cout << GREEN << "\tCONTACT NUMBER#" << (i + 1) << std::endl;
	
    //First name
	std::cout << PINK << "NEW CONTACT FIRST NAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) && !input.empty())
		newContactTmp.setFirstName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Last name
	std::cout << PINK << "NEW CONTACT LAST NAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) && !input.empty())// doit verifier que le input est pas null
		newContactTmp.setLastName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Nick name
	std::cout << PINK << "NEW CONTACT NICKNAME:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsAlpha(input) && !input.empty())
		newContactTmp.setNickName(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [A-Z]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Phone number
	std::cout << PINK << "NEW CONTACT PHONE NUMBER:" << GREEN << std::endl;
	std::getline(std::cin, input);
	if (stringIsDigit(input) && !input.empty())
		newContactTmp.setPhoneNumber(input);
	else
	{
		std::cout << RED << "WRONG INPUT : MUST BE ONLY [0-9]" << RESET << std::endl;
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
		sleep(3);	
		return ;
	}
	// Darkest secret
	std::cout << PINK << "NEW CONTACT DARKEST SECRET:" << GREEN << std::endl;
	std::getline(std::cin, input);
	newContactTmp.setDarkestSecret(input);
	if (nbContact != 8)
		nbContact++;
	contact[nbContact - 1] = newContactTmp;
	std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
	std::cout << GREEN << "NEW CONTACT ADDED" << RESET << std::endl;
	std::cout << GREEN << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
	// sleep(3);
}

// Getter de contact[]
void Phonebook::searchContact() {
	
	if (nbContact > 0)
        displaySearchMenu();
    else {
		std::cout << RED << "You need to add some contact before searching one\n" << RESET << std::endl; sleep(3);
		std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl; sleep(3); return ;
    }
    std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
    std::cout << PINK << "WHICH CONTACT YOU WANT TO SEE?" << BLUE << std::endl;
	std::getline(std::cin, input);
    if (!stringIsAlpha(input)) {
        if (nbContact < std::stoi(input)) {
            std::cout << RED << "You dont have enought contact to search this index\n" << RESET
                      << std::endl;
            sleep(3);
            std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
            sleep(3);
            return;
        } else if (std::stoi(input) <= 8) {
            displayContact(std::stoi(input));
        }
    }
    else {
        std::cout << RED << "You need to add a valid index digit\n" << RESET
                  << std::endl;
        sleep(3);
        std::cout << RED << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
        sleep(3);
        return;
    }
    std::cout << BLUE << "*=========================================================*\n" << RESET << std::endl;
    std::cout << GREEN << "RETURNING TO MAIN MENU . . .\n" << RESET << std::endl;
    sleep(3);
}

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
