/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 18:45:49 by olabrecq         ###   ########.fr       */
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
		
		std::getline(std::cin, phonebook.input);
		if (phonebook.input == "ADD")
			phonebook.addContact();
		else if (phonebook.input == "SEARCH")
			phonebook.searchContact();
		else if (phonebook.input == "EXIT")
			break;
		else
			std::cout << "Wrong command you dump ass" << std::endl;
	}
	
  return 0;
}
//  A FAIRE : update le nombre de contact par rapport a lindex de contact
// pour quand je fait search elle sois upgrade et affiche le bon nombre de contact
// Checker des video sur les setter ans getter
