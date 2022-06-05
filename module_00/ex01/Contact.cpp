/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:55 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 21:35:51 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

Contact add_contact()
{
	Contact new_contact;
	
	std::cout <<  "ENTER THE FIRST NAME: ";
	std::getline(std::cin ,new_contact.first_name);
	std::cout << "\n";
	std::cout <<  "ENTER THE LAST NAME: ";
	std::getline(std::cin ,new_contact.last_name);
	std::cout << "\n";
	std::cout <<  "ENTER THE NICKNAME: ";
	std::getline(std::cin ,new_contact.nickname);
	std::cout << "\n";
	std::cout <<  "ENTER THE PHONE NUMBER: ";
	std::getline(std::cin ,new_contact.phone_nuber);
	std::cout << "\n";
	std::cout <<  "ENTER THE DARKEST_SECRET: ";
	std::getline(std::cin ,new_contact.darkest_secret);
	std::cout << "\n";

	return (new_contact);
}