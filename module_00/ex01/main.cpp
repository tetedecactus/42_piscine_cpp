/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/24 13:52:45 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main ()
{

	phoneboook::contact new_contact;
	std::cout << "Please, enter your first name: ";
	std::getline(std::cin, new_contact.first_name);
	std::cout << "Please, enter your last name: ";
	std::getline(std::cin, new_contact.last_name);
	std::cout << "Please, enter your nickname: ";
	std::getline(std::cin, new_contact.nickname);
	std::cout << "Please, enter your phone number: ";
	std::getline(std::cin, new_contact.phone_number);
	std::cout << "Please, enter your darkest secret: ";
	std::getline(std::cin, new_contact.darkest_secret);

	std::cout << "Hello, " << new_contact.first_name << "!\n";
	std::cout << "Hello, " << new_contact.last_name << "!\n";
	std::cout << "Hello, " << new_contact.nickname << "!\n";
	std::cout << "Hello, " << new_contact.phone_number << "!\n";
	std::cout << "Hello, " << new_contact.darkest_secret << "!\n";

  return 0;
}