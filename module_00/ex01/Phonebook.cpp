/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 18:50:13 by olabrecq         ###   ########.fr       */
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

void Phonebook::displayMenu() {
	
	std::cout << "\033[0;36m\t\t      MAIN MENU\n\n\033[0m" << std::endl;
	std::cout << "\033[0;36m\t\t📞--->PHONEBOOK<---📞\n\033[0m" << std::endl;
	std::cout << "\033[0;36m*=========================================================*\n\033[0m" << std::endl;
	std::cout << "\033[0;36mPLEASE ENTER COMMAND\n\033[0m" << std::endl;
	std::cout << "\033[0;32mADD 	-> To add a new contact\033[0m" << std::endl;
	std::cout << "\033[0;33mSEARCH	-> To search a contact\033[0m" << std::endl;
	std::cout << "\033[0;31mEXIT 	-> To quit your phonebook (delete all contact)\n\033[0m" << std::endl;
	std::cout << "\033[0;36m*=========================================================*\n\033[0m" << std::endl;
}

// void Phonebook::displayContact(int indexContact) {
	
// }

Contact Phonebook::addContact() {
	
	Contact newContact;
	
	newContact.setIndexContact();
	std::cout << "\033[0;36m\t\t📞--->NEW CUNTACT<---📞\n\033[0m" << std::endl;
	std::cout << "\033[0;36m*=========================================================*\n\033[0m" << std::endl;
	std::cout << "\033[0;36mPLEASE ENTER CUNTACT INFORMATION\n\033[0m" << std::endl;
	
	std::cout << "\033[0;35mNEW CUNTACT FIRST NAME:\033[0;32m" << std::endl;
		newContact.setFirstName();
	// 	newContact.setInfo("firstName");
	std::cout << "\033[0;35mNEW CUNTACT LAST NAME:\033[0;32m" << std::endl;
		newContact.setLastName();
	// 	newContact.setInfo("lastName");
	std::cout << "\033[0;35mNEW CUNTACT NICKNAME:\033[0;32m" << std::endl;
		newContact.setNickName();
	// 	newContact.setInfo("nickName");
	std::cout << "\033[0;35mNEW CUNTACT PHONE NUMBER:\033[0;32m" << std::endl;
		newContact.setPhoneNumber();
	// 	newContact.setInfo("phoneNumber");
	std::cout << "\033[0;35mNEW CUNTACT DARKEST SECRET:\033[0;32m" << std::endl;
		newContact.setDarkestSecret();
	// 	newContact.setInfo("darkestSecret");
	std::cout << "\033[0;32m*=========================================================*\n\033[0m" << std::endl;
	return (newContact);
}


void Phonebook::searchContact() {
	
	if (this->nbContact == 0)
	{
		std::cout << "\033[0;31mYou need to add some contact before searching one you stupid fucking cunt\n\033[0m" << std::endl;
		sleep(3);	
	}
	std::cout << "\033[0;31mRETURNING TO MAIN MENU . . .\n\033[0m" << std::endl;
	
}

// void Phonebook::findContact() {
	
// }
