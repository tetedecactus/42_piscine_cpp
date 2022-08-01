/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 11:40:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


// =========== Constructor | Destructor |  ETC ... =======================================
Bureaucrat::Bureaucrat( void ) : _name("Pierre Default Bureaucrat Name"), _grade(150) {
	std::cout << BLUE << "Default Const Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name), _grade(grade) {
	if ( _grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	if ( _grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	std::cout << BLUE << "Default Const with Parameter Called for : " << RESET << _name << std::endl;
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
 const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade of Bureaucrat is too High"; }
 const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade of Bureaucrat is too Low"; }

// ======================================== UP & DOWN GRRADE FUNCTION ======================================================
void Bureaucrat::downGrade( int nb ) {
	if ( _grade + nb > 150 )
		throw Bureaucrat::GradeTooLowException();
	setGrade( _grade + nb );
	
	std::cout << RED << _name << RESET
	" get down grade of : " << nb << " lvl by his boss" << std::endl;
}

void Bureaucrat::upGrade( int nb ) {
	if ( _grade - nb < 1 )
		throw Bureaucrat::GradeTooLowException();
	setGrade( _grade - nb );
	
	std::cout << GREEN << _name << RESET
	" get up grade of : " << nb << " lvl by his boss" << std::endl;
}

// ============================================= SIGN FORM =================================================
void Bureaucrat::signForm( Form& form ) {
	
	try
	{
		form.beSigned(*this);
		std::cout << YELLOW << _name << RESET <<
		" : Signed the form : " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << PINK << _name << RESET
		<< " couldn't sign " << PINK << form.getName() << RESET 
		<< " because : " ;
		std::cerr << e.what() << '\n';
	}

}

// ========================================= OPERATOR << =====================================================
std::ostream& operator<<( std::ostream& o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
