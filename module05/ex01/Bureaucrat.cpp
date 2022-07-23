/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/23 01:28:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// =========== Constructor | Destructor |  ETC ... =======================================
Bureaucrat::Bureaucrat( void ) : _name("Pierre Default Bureaucrat Name"), _grade(150) {
	std::cout << BLUE << "Default Const Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name), _grade(grade) {
	if ( _grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	if ( _grade < 1 )
		throw Bureaucrat::GradeTooHighException(); 
	std::cout << BLUE << "Default Const with Parameter Called for : " + _name << RESET << std::endl;
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

// ========================= Setter & Getter ===========================================
void Bureaucrat::setGrade( unsigned int grade ) { _grade = grade; }
unsigned int Bureaucrat::getGrade( void ) const { return _grade; }
std::string Bureaucrat::getName( void ) const { return _name; }

// ==================== EXCEPTION ==========================================================
 const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too High"; }
 const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too Low"; }

// ======================================== UP & DOWN GRRADE FUNCTION ======================================================
void Bureaucrat::downGrade( int nb ) {
	if ( _grade + nb > 150 ) 
		throw Bureaucrat::GradeTooLowException();
	setGrade( _grade + nb );
}

void Bureaucrat::upGrade( int nb ) {
	if ( _grade - nb < 1 ) 
		throw Bureaucrat::GradeTooLowException();
	setGrade( _grade - nb );
}

// ============================================= SIGN FORM =================================================
void Bureaucrat::signForm( void ) const {// devrais prendre un form en param ??
//try n catch???
	
}

// ========================================= OPERATOR << =====================================================
std::ostream& operator<<( std::ostream& o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade(); 
	return o;
}