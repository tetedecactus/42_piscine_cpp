/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/01 17:31:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
public:
    std::string cmd;
    void addContact();
    void searchContact();
    // void findContact();

	void displayMenu();
    Phonebook();
    ~Phonebook();
    
};

#endif