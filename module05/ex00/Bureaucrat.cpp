/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/08 16:33:33 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("DefaultName"), _grade(150) {
	std::cout << BLUE << "Default Const Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name), _grade(grade) {
	std::cout << BLUE << "Default Const with Parameter Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

// Bureaucrat& operator=( Bureaucrat const & rhs) {
// 	// this._name = rhs._name;
// 	// this._grade = rhs._grade;
// }

// ============ Setter & Getter ==============

void Bureaucrat::setGrade( unsigned int grade ) {
	_grade = grade;
}

std::string Bureaucrat::getName( void ) const {
	return _name;
}
