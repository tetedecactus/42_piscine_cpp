/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:16 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 13:28:00 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("formulaire de demande de robotomie", 72, 45), _target("Panini toaster")
{
	// std::cout << BLUE << "Robotomy Request Construction Called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : Form("formulaire de demande de robotomie", 72, 45), _target(target)
{
	// std::cout << BLUE << "Robotomy Request Construction Called with target : " << RESET << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form("formulaire de demande de robotomie", 72, 45), _target(src._target) { *this = src; }

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	// std::cout << RED << "Robotomy Destructor Called" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

std::string RobotomyRequestForm::getTarget( void ) const { return _target; }

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	std::srand(time(NULL));
	if ( getIsSigned() == true && executor.getGrade() <= getGradeToExec() ) {
		std::cout << "DRrrrrrrrwwwwwRRRWWRWRATATATATTTTAAAA" << std::endl;
		if (std::rand() % 2  == 0) 
			std::cout << YELLOW << getTarget() << RESET << " have been Robotizzz" << std::endl;
		else
			std::cout << RED << getTarget() << RESET << " Failed to robotize" << std::endl;
		
	}
	else {
		if (getIsSigned() == false)
			throw Bureaucrat::FormNotSignedException();
		else
			throw Form::GradeTooLowException();
	}
}