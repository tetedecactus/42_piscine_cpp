/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 11:54:25 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
using std::cout;
// typedef std::cout cout;
contact add_contact()
{
	// contact new_contact;
	// static index = 0;
	
	// index++;
	// if (index == 8)
	// {
		
	// 	delete_8th_contact(new_contact);
	// }
	// else
	// {
		new_contact.index = index;
	// }
	cout <<  "ENTER THE FIRST NAME: ";
	std::getline(std::cin ,new_contact.first_name);
	cout << "\n";
	cout <<  "ENTER THE LAST NAME: ";
	std::getline(std::cin ,new_contact.last_name);
	cout << "\n";
	cout <<  "ENTER THE NICKNAME: ";
	std::getline(std::cin ,new_contact.nickname);
	cout << "\n";
	cout <<  "ENTER THE PHONE NUMBER: ";
	std::getline(std::cin ,new_contact.phone_nuber);
	cout << "\n";
	cout <<  "ENTER THE DARKEST_SECRET: ";
	std::getline(std::cin ,new_contact.darkest_secret);
	cout << "\n";
	cout << "RETURN TO MAIN MENU" << std::endl;
	
	return (new_contact);
}

// void	display_colonne(phonebook::contact contact)
// {
	
// }

// contact search_contact()
// {
// 	display_colonne
// }

int main ()
{
	// si le phonebook ce ferme quand il reouver cb de contact ya??
	phonebook phonebook;
	int i = 0;
	while (true)
	{
		cout << "\t\t📞--->PHONEBOOK<---📞\n" << std::endl;
		cout << "*******************************************************\n" << std::endl;
		cout << "PLEASE ENTER COMMAND\n" << std::endl;
		cout << "ADD || SEARCH || EXIT \n" << std::endl;
		std::getline(std::cin, phonebook.cmd);
		cout << std::endl;
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
