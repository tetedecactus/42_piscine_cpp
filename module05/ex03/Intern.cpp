/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:02:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/28 10:51:19 by olabrecq         ###   ########.fr       */
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
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern( Intern const & src ) { *this = src; }

Intern::~Intern( void )
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern& Intern::operator=( Intern const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

const char* Intern::WrongFormNameException::what() const throw() { return "Can't find the Form (Wrong Form Name)"; }


Form* Intern::makeForm( const std::string formName, const std::string& target ) {

	Form* (Intern::*ptrFunction[3])(const std::string& target) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidentialRequest};
	std::string choice[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	
	try
	{
		int i;

		i = 0;
		while (formName != choice[i] && i < 3) 
			i++;
		if (i == 3)
			throw WrongFormNameException();
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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
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