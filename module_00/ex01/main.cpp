/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/24 18:01:34 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main ()
{
	phonebook input;
	std::cout << "\t\t📞--->PHONEBOOK<---📞\n" << std::endl;
	std::cout << "PLEASE ENTER COMMAND\n" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	// while (1)
	// {
		std::getline(std::cin, input.cmd);
	// }
  return 0;
}
// Note
// strcmp la cmd ??
// when endl or \n