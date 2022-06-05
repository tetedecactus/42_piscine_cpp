/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:55 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 13:11:22 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact() {
	
	std::cout << "Constructor Contact called" << std::endl;
	std::cout << "index = " << index << std::endl;
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
	
}

Contact::~Contact() {
	
	std::cout  << "Destructor Contact called" << std::endl;
}

// std::string Contact::getInfo() {
	
// }
