/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:12 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/27 19:55:50 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("formulaire de pardon présidentiel", 25, 5)
{
	std::cout << BLUE << "Robotomy Request Construction Called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : Form("formulaire de pardon présidentiel", 25, 5)
{
	std::cout << BLUE << "Robotomy Request Construction Called with target : " << RESET << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) { *this = src; }

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << RED << "Robotomy Destructor Called" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	
	if ( getIsSigned() == true && executor.getGrade() <= getGradeToExec() ) {
		std::cout << YELLOW << executor.getName() << RESET << " : Have been forgive by Zaphod Beeblebrox" << std::endl;
	}
	else {
		if (getIsSigned() == false)
			throw Bureaucrat::FormNotSignedException();
		else
			throw Form::GradeTooLowException();
	}
}