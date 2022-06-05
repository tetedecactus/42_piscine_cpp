/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 13:25:42 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {

	std::cout << "Constructor Phonebook called" << std::endl;
}

Phonebook::~Phonebook() {

	std::cout  << "Destructor Phonebook called" << std::endl;
}

void Phonebook::displayMenu() {
	
	std::cout << "\033[0;32m\t\t📞--->PHONEBOOK<---📞\n\033[0m" << std::endl;
	std::cout << "\033[0;32m*******************************************************\n\033[0m" << std::endl;
	std::cout << "\033[0;32mPLEASE ENTER COMMAND\n\033[0m" << std::endl;
	std::cout << "\033[0;32mADD 	-> To add a new contact\033[0m" << std::endl;
	std::cout << "\033[0;33mSEARCH	-> To search a contact\033[0m" << std::endl;
	std::cout << "\033[0;31mEXIT 	-> To quit your phonebook (delete all contact)\033[0m" << std::endl;
}

void Phonebook::addContact() {
	
}

void Phonebook::searchContact() {
	
}

// void Phonebook::findContact() {
	
// }
