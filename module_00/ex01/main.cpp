/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:12:31 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/01 11:09:05 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main ()
{
  std::cout << "Please, enter your full name: ";
  std::getline(std::cin, fiche_contact::first_name);
  std::cout << "Hello, " << fiche_contact::first_name << "!\n";

  return 0;
}