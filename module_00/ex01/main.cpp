/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 13:27:47 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int main ()
{
	Phonebook phonebook;
	
	// int i = 0;
	while (1)
	{
		phonebook.displayMenu();
		
		std::getline(std::cin, phonebook.cmd);
		if (phonebook.cmd == "ADD")
			phonebook.addContact();
		else if (phonebook.cmd == "SEARCH")
			phonebook.searchContact();
		else if (phonebook.cmd == "EXIT")
			break;
		else
			std::cout << "Wrong command you dump ass" << std::endl;
	}
	
  return 0;
}
