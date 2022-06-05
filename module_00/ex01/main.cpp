/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 22:23:32 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact search_contact();

int main ()
{
	// si le phonebook ce ferme quand il reouver cb de contact ya??
	Phonebook phonebook;
	
	int i = 0;
	while (1)
	{
		std::cout << "\t\t📞--->PHONEBOOK<---📞\n" << std::endl;
		std::cout << "*******************************************************\n" << std::endl;
		std::cout << "PLEASE ENTER COMMAND\n" << std::endl;
		std::cout << "ADD || SEARCH || EXIT" << std::endl;
		
		std::getline(std::cin, phonebook.cmd);
		if (phonebook.cmd == "ADD")
			phonebook.add_contact();
		else if (phonebook.cmd == "SEARCH")
			phonebook.search_contact();
		else if (phonebook.cmd == "EXIT")
			break;
		else
			std::cout << "Wrong command you dump ass" << std::endl;
	}
	
  return 0;
}
