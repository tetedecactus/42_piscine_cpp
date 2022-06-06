/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:55 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 20:29:00 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact() {
	
	std::cout << "Constructor Contact called" << std::endl;
	indexContact = 0;
	std::cout << "index = " << indexContact << std::endl;
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
	
}

Contact::~Contact() {
	
	std::cout  << "Destructor Contact called" << std::endl;
}

void Contact::setIndexContact() {
	static int i = 1;
	indexContact = i;
    i++;
}

bool Contact::setFirstName() {
	std::string input;
	std::getline(std::cin, input);
	firstName = input;
}

bool Contact::setLastName() {
	std::string input;
	std::getline(std::cin, input);
	lastName = input;
}

void Contact::setNickName() {
	std::string input;
	std::getline(std::cin, input);
	nickName = input;
}

bool Contact::setPhoneNumber() {
	std::string input;
	std::getline(std::cin, input);
	phoneNumber = input;
}

void Contact::setDarkestSecret() {
	std::string input;
	std::getline(std::cin, input);
	darkestSecret = input;
}

// std::string Contact::getInfo(std::string contactInfo) {
	
// 	std::string infoInput;
// 	if (contactInfo == "firstName")
// 	{
// 		std::getline(std::cin, infoInput);
// 		return (infoInput);
// 	}
// 	// if (contactInfo = "lastName")
// 	// if (contactInfo = "nickName")
// 	// if (contactInfo = "phoneNumber")
// 	// if (contactInfo = "darkestSecret")
// 	return ("");
// }

// void  Contact::setInfo(std::string contactInfo) {
	
// 	std::string infoInput;
	
// 	infoInput = "";
// 	if (contactInfo == "firstName")
// 	{
// 		std::getline(std::cin, infoInput);
// 		firstName = infoInput;
// 	}
// 	if (contactInfo == "lastName")
// 	{
// 		std::getline(std::cin, infoInput);
// 		lastName = infoInput;
// 	}
// 	if (contactInfo == "nickName")
// 	{
// 		std::getline(std::cin, infoInput);
// 		nickName = infoInput;
// 	}
// 	if (contactInfo == "phoneNumber")
// 	{
// 		std::getline(std::cin, infoInput);
// 		phoneNumber = infoInput;
// 	}
// 	if (contactInfo == "darkestSecret")
// 	{
// 		std::getline(std::cin, infoInput);
// 		darkestSecret = infoInput;
// 	}
// 	if (indexContact == 0)
// 		indexContact = 1;
// 	else
// 	{
// 		if (indexContact == 8)
// 		{
// 			std::cout << "Too mush contact, one need to be delete!!\n" << std::endl;
// 		}
// 	}
// }
