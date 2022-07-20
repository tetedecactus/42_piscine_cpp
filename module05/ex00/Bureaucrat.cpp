/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/20 14:44:33 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// =========== Constructor | Destructor |  ETC ... =======================================
Bureaucrat::Bureaucrat( void ) : _name("Pierre Default Bureaucrat Name"), _grade(150) {
	std::cout << BLUE << "Default Const Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name), _grade(grade) {
	std::cout << BLUE << "Default Const with Parameter Called" << RESET << std::endl;
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << RED << "Destructor Called for : " + _name << RESET << std::endl;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const & rhs) {
	this->_grade = rhs.getGrade();
	return *this;
}
// ==============================================================================================





// ========================= Setter & Getter ===========================================

void Bureaucrat::setGrade( unsigned int grade ) { _grade = grade; }

unsigned int Bureaucrat::getGrade( void ) const { return _grade; }

std::string Bureaucrat::getName( void ) const { return _name; }

//=======================================================================================






// ==================== EXCEPTION ==========================================================
 const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too High"; }

 const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too Low"; }

// ==============================================================================================

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs )
{
	s << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ; return s;
}



void Bureaucrat::checkGrade( unsigned int grade ) const {
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();  
	
}