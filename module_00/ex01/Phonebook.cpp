/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 20:36:42 by olabrecq         ###   ########.fr       */
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

// addContact is my setContact[] 
void Phonebook::addContact() {
	
	// Contact contact->
    
	contact->setIndexContact();
	std::cout << "\033[0;36m\t\t📞--->NEW CUNTACT<---📞\n\033" << std::endl;
	std::cout << "\033[0;36m*=========================================================*\n\033[0m" << std::endl;
	std::cout << "\033[0;36mPLEASE ENTER CUNTACT INFORMATION\n\033" << std::endl;
    
    
	std::cout << "\033[0;32m\tCUNTACT NUMBER#" << contact->getIndexContact() << std::endl;
    
	std::cout << "\033[0;35mNEW CUNTACT FIRST NAME:\033[0;32m" << std::endl;
		contact->setFirstName();
	// 	contact->setInfo("firstName");
    
	std::cout << "\033[0;35mNEW CUNTACT LAST NAME:\033[0;32m" << std::endl;
		contact->setLastName();
	// 	contact->setInfo("lastName");
    
	std::cout << "\033[0;35mNEW CUNTACT NICKNAME:\033[0;32m" << std::endl;
		contact->setNickName();
	// 	contact->setInfo("nickName");
    
	std::cout << "\033[0;35mNEW CUNTACT PHONE NUMBER:\033[0;32m" << std::endl;
		contact->setPhoneNumber();
	// 	contact->setInfo("phoneNumber");
    
	std::cout << "\033[0;35mNEW CUNTACT DARKEST SECRET:\033[0;32m" << std::endl;
		contact->setDarkestSecret();
	// 	contact->setInfo("darkestSecret");
    

    
    std::cout << "\033[0;35mNEW CONTACT INFO:\n" << std::endl;
    std::cout << "\033[0;35mFIRST NAME:\n" << contact->getFirstName() << std::endl;
    std::cout << "\033[0;35mLAST NAME:\n" << contact->getLastName() << std::endl;
    std::cout << "\033[0;35NICKNAME:\n" << contact->getNickName() << std::endl;
    std::cout << "\033[0;35mPHONENUMBER:\n" << contact->getPhoneNumber() << std::endl;
    std::cout << "\033[0;35mDARKEST SECRET:\n" << contact->getDarkestSecret() << std::endl;
    
	std::cout << "\033[0;36m*=========================================================*\n\033[0m" << std::endl;
}


void Phonebook::searchContact() {
	
	if (this->nbContact == 0)
	{
		std::cout << "\033[0;31mYou need to add some contact before searching one you stupid fucking cunt\n\033[0m" << std::endl;
		sleep(3);	
	}
	std::cout << "\033[0;31mRETURNING TO MAIN MENU . . .\n\033[0m" << std::endl;
	sleep(3);	
}

// void Phonebook::findContact() {
	
// }
