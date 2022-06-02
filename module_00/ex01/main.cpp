/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/02 16:08:22 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

contact add_contact()
{
	contact new_contact;
	static index = 0;
	
	index++;
	if (index == 8)
	{
		
		delete_8th_contact(new_contact);
	}
	else
	{
		new_contact.index = index;
	}
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
	std::cout << "RETURN TO MAIN MENU" << std::endl;
	
	return (new_contact);
}

void	display_colonne(phonebook::contact contact)
{
	
}

contact search_contact()
{
	display_colonne
}

int main ()
{
	// si le phonebook ce ferme quand il reouver cb de contact ya??
	phonebook phonebook;
	int i = 0;
	while (true)
	{
		std::cout << "\t\t📞--->PHONEBOOK<---📞\n" << std::endl;
		std::cout << "*******************************************************\n" << std::endl;
		std::cout << "PLEASE ENTER COMMAND\n" << std::endl;
		std::cout << "ADD || SEARCH || EXIT \n" << std::endl;
		std::getline(std::cin, phonebook.cmd);
		std::cout << std::endl;
		if (phonebook.cmd == "ADD" || phonebook.cmd == "add")
			phonebook.contact[i++] =  add_contact();
		else if (phonebook.cmd == "SEARCH" || phonebook.cmd == "search")
			std::cout << "COMMAND IS: "<< phonebook.cmd <<"" << "\n";
		else if (phonebook.cmd == "EXIT" || phonebook.cmd == "exit")
			break;
		else
			std::cout << "Wrong command you dump ass" << std::endl;
	}
  return 0;
}
