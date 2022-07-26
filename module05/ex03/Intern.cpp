/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:02:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 17:53:11 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

Intern::Intern( void ) 
{
	
}

Intern::Intern( Intern const & src ) { *this = src; }

Intern::~Intern( void )
{
	
}

Intern& Intern::operator=( Intern const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

Form* Intern::makeForm( std::string& formName, std::string& target ) {

	Form* (Intern::*ptrFunction[])(Form*) = {&Intern::makeShrubbery, & Intern::makeRobotomy, &Intern::makePresidentialRequest};
	std::string choice[] = {"formulaire de création d’arbustes", "formulaire de demande de robotomie", "formulaire de pardon présidentiel"};
	int i;

	i = 0;
	while (target != choice[i] && i <= 4)
		i++;
	if (i == 4)
		std::cout << PINK << "Your target : "<< target << " was invalid, Please entre en un bon next time" << RESET << std::endl;
	while ( i < 4 )
	{
		switch ( i )
		{
		case 0:
			(this->*ptrFunction[i])(target);
			break;
		case 1:
			(this->*ptrFunction[i])(target);
			break;
		case 2:
			(this->*ptrFunction[i])(target);
		break;
			case 3:
			(this->*ptrFunction[i])(target);
			break;
		}
		i++;
	}

}

Form* Intern::makeShrubbery( std::string& target ) {
	std:cout << PINK << "Intern creates Form : " << RESET << target << std::endl;	
}

Form* Intern::makeRobotomy( std::string& target ) {
	std:cout << PINK << "Intern creates Form : " << RESET << target << std::endl;	
}

Form* Intern::makePresidentialRequest( std::string& target ) {
	std:cout << PINK << "Intern creates Form : " << RESET << target << std::endl;	
}