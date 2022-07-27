/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:02:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 21:05:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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

Form* Intern::makeForm( const std::string formName, const std::string& target ) {

	Form* (Intern::*ptrFunction[3])(const std::string& target) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidentialRequest};
	std::string choice[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	int i;

	i = 0;
	while (formName != choice[i] && i <= 3)
		i++;
	if (i == 3)
		std::cout << PINK << "Your target : "<< target << " was invalid, Please entre en un bon next time" << RESET << std::endl;
	while ( i < 3 )
	{
		switch ( i )
		{
		case 0:
			return (this->*ptrFunction[i])(target);
			break;
		case 1:
			return (this->*ptrFunction[i])(target);
			break;
		case 2:
			return (this->*ptrFunction[i])(target);
			break;
		}
		i++;
	}
	return (NULL);
}

Form* Intern::makeShrubbery( const std::string& target ) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy( const std::string& target ) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialRequest( const std::string& target ) {
	return new PresidentialPardonForm(target);
}