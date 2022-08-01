/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:16:02 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 11:41:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// =========== Constructor | Destructor |  ETC ... =======================================
Form::Form( void ) : _name("B-12"), _gradeToSigned(5), _gradeToExec(1)
{
    _isSigned = false;

    std::cout << BLUE << "Form " + _name << RESET
    <<" Default constructor called" << std::endl;
}

Form::Form( std::string formName, unsigned int gradeToSign, unsigned int gradeToExec ) : _name(formName), _gradeToSigned(gradeToSign), _gradeToExec(gradeToExec)
{
    _isSigned = false;

    checkGrade( gradeToSign, gradeToExec );

    std::cout << BLUE << "Form " + _name << RESET
    <<" Default constructor with param called" << std::endl;

}

Form::Form( Form const & src ) : _name(src._name), _gradeToSigned(src._gradeToSigned), _gradeToExec(src._gradeToExec) {
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
	return *this;
}

// ============================================= BE SIGNED FORM =================================================
void Form::beSigned( Bureaucrat const & employe ) {
    if ( employe.getGrade() > _gradeToSigned )
        throw Form::GradeTooLowException();
    setIsSigned( true );
}


void Form::checkGrade( unsigned int gradeToSign, unsigned int gradeToExec ) const {
    if ( gradeToSign < 1 || gradeToExec < 1 )
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExec > 150 )
        throw Form::GradeTooLowException();
}
/// checkser pour passe valu into exeception pas savoir si cest a cause de 1/2 ou de 2/2 de grade qui n'est pas bon

// ==================== EXCEPTION ==========================================================
const char* Form::GradeTooHighException::what() const throw() { return "Grade of Form is too High"; }
const char* Form::GradeTooLowException::what() const throw() { return "Grade of Form is too Low"; }

// ========================= Setter & Getter ===========================================
void Form::setIsSigned( bool newIsSigned ) { _isSigned = newIsSigned; }

std::string Form::getName( void ) const { return _name; }
bool Form::getIsSigned( void) const { return _isSigned; }
unsigned int Form::getGradeToSigned( void ) const { return _gradeToSigned; }
unsigned int Form::getGradeToExec( void ) const { return _gradeToExec; }

// ========================================= OPERATOR << =====================================================
std::ostream& operator<<( std::ostream& o, Form const & f ) {
    o << f.getName() << ", form, signing grade " << f.getGradeToSigned() << ", executing grade "
       << f.getGradeToExec() << (f.getIsSigned() ? ", is signed\n" : ", is not signed\n");

    return o;
}
