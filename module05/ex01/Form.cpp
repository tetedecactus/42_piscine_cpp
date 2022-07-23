/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:16:02 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/22 20:34:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("B-12")
{
    _isSigned = false;
    _gradeToSigned = 5;
    _gradeToExec = 1;
    
    std::cout << BLUE << "Form " + _name << RESET 
    <<" Default constructor called" << std::endl;
}

Form::Form( std::string formName, int gToSign, int gToExec ) : _name(formName)
{
    _isSigned = false;
    _gradeToSigned = gToSign;
    _gradeToExec = gToExec;
    
    checkGrade( gToSign, gToExec );

    std::cout << BLUE << "Form " + _name << RESET 
    <<" Default constructor with param called" << std::endl;

}

Form::Form( Form const & src ) {
	*this = src;
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

Form::~Form( void )
{
    std::cout << RED << "Form " + _name << RESET 
    <<" Default Destructor called" << std::endl;
}

Form& Form::operator=( Form const & rhs ) {
    this->_isSigned = rhs.getIsSigned();
    this->_gradeToSigned = rhs.getGradeToSigned();
    this->_gradeToExec = rhs.getGradeToExec();
	return *this;
}


void Form::beSigned( Bureaucrat signataire ) {
    if (signataire.getGrade() < _gradeToSigned )
        std::cout << "grade fit pas" << std::endl;
    
}

void Form::checkGrade( unsigned int gradeToSign, unsigned int gradeToExec ) const {
    if ( this->_gradeToSigned < gradeToSign || this-> _gradeToExec < gradeToExec )
        throw Form::GradeTooHighException();
    if ( this->_gradeToSigned > gradeToSign || this-> _gradeToExec > gradeToExec )
        throw Form::GradeTooLowException();
}

// void Form::checkGrade( int gradeToSign, int gradeToExec ) {
//     if ( this->_gradeToSigned < gradeToSign )
//         throw Form::GradeTooHighException(1);
//     if (this-> _gradeToExec < gradeToExec )
//         throw Form::GradeTooHighException(2);
//     if ( this->_gradeToSigned > gradeToSign )
//         throw Form::GradeTooLowException(1);
//     if ( this-> _gradeToExec > gradeToExec )
//         throw Form::GradeTooLowException(2);
// }

const char* Form::GradeTooHighException::what() const throw() { return "Grade too High"; }

const char* Form::GradeTooLowException::what() const throw() { return "Grade too Low"; }


void Form::setIsSigned( bool newIsSigned ) { _isSigned = newIsSigned; }
void Form::setGradeToSigned( unsigned int newGradeToSigned ) { _gradeToSigned = newGradeToSigned; }
void Form::setGradeToExec( unsigned int newGradeToExec ) { _gradeToExec = newGradeToExec; }

std::string Form::getName( void ) const { return _name; }
bool Form::getIsSigned( void) const { return _isSigned; }
unsigned int Form::getGradeToSigned( void ) const { return _gradeToSigned; }
unsigned int Form::getGradeToExec( void ) const { return _gradeToExec; }