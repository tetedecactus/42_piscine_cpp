/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:04:40 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/28 10:36:12 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

class Form;

class Intern 
{
private:
	/* data */
public:
	Intern( void );
	Intern( Intern const & src );
	virtual ~Intern( void );

	Intern& operator=( Intern const & rhs );

	class WrongFormNameException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	Form* makeForm( const std::string formName, const std::string& target );

	Form* makeShrubbery( const std::string& target );
	Form* makeRobotomy( const std::string& target );
	Form* makePresidentialRequest( const std::string& target );

};