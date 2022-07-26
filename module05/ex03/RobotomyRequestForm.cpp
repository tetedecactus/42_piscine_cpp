/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:16 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/25 20:53:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("formulaire de demande de robotomie", 72, 45)
{
	std::cout << BLUE << "Robotomy Request Construction Called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string& target ) : Form("(formulaire de demande de robotomie", 72, 45)
{
	std::cout << BLUE << "Robotomy Request Construction Called with target : " << RESET << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) { *this = src; }

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << RED << "Robotomy Destructor Called" << RESET << std::endl;
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
		std::cout << "DRrrrrrrrwwwwwRRRWWRWRATATATATTTTAAAA" << std::endl;
		if (std::rand() % 2 == 0) {
			std::cout << YELLOW << executor.getName() << RESET << " have been Robotizzz" << std::endl;
			
		}
		else
			std::cout << RED << executor.getName() << RESET << " Failed to robotize" << std::endl;
		
	}
	else
		throw Form::GradeTooLowException();
}