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
#include <iomanip>
#include <string>
#include <time.h>
#include <unistd.h>
#include "Contact.hpp"
#include "color.hpp"

class Phonebook
{
private:
    Contact contact[8];
	int nbContact;

	bool stringIsAlpha(std::string& input);
	bool stringIsDigit(std::string& input);

public:
    std::string input;

    void addContact( void );// setter de contact[] & nbContact
    void searchContact( void );
	void displayMenu( void );
    void displaySearchMenu( void );
	void displayContact(int indexContact);

    Phonebook( void );
    ~Phonebook( void );
    
};

#endif