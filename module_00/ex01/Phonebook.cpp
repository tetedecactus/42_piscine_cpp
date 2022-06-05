/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:27 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 21:52:36 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}


void Phonebook::add_contact()
{
    int i = 0;
	this->contact[i];
	
    // doit faire une fonction public pour get les info des contacts
	std::cout <<  "ENTER THE FIRST NAME: ";
	std::getline(std::cin ,this->contact[i].first_name);
	std::cout << "\n";
	std::cout <<  "ENTER THE LAST NAME: ";
	std::getline(std::cin ,this->contact[i].last_name);
	std::cout << "\n";
	std::cout <<  "ENTER THE NICKNAME: ";
	std::getline(std::cin , this->contact[i].nickname);
	std::cout << "\n";
	std::cout <<  "ENTER THE PHONE NUMBER: ";
	std::getline(std::cin , this->contact[i].phone_nuber);
	std::cout << "\n";
	std::cout <<  "ENTER THE DARKEST_SECRET: ";
	std::getline(std::cin , this->contact[i].darkest_secret);
	std::cout << "\n";

	return (new_contact);
}