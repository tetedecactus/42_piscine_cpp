/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:16 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/25 17:05:19 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


// formulaire de création d’arbustes
// Échelons requis : signature 72, exécution 45

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("formulaire de création d’arbustes", 145, 137)
{
	std::cout << BLUE << "Shrubbery Creation Construction Called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string& target ) : Form("formulaire de création d’arbustes", 145, 137)
{
	std::cout << BLUE << "Shrubbery Creation Construction Called with target : " << RESET << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) { *this = src; }

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << RED << "Shrubbery Destructor Called" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	
	if ( getIsSigned() == true && executor.getGrade() <= getGradeToExec() ) {
		std::cout << "DRrrrrrrrwwwwwRRRWWRWRATATATATTTTAAAA"
		if (std::rand() % 2 == 0)
			std::cout << YELLOW << executor.getName() << RESET << " have been Robotizzz" << std::endl;
		else
			std:cout << RED << executor.getName() << RESET << " Failed to robotize" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}