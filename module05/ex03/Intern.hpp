/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:04:40 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 20:58:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

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

	Form* makeForm( const std::string formName, const std::string& target );

	Form* makeShrubbery( const std::string& target );
	Form* makeRobotomy( const std::string& target );
	Form* makePresidentialRequest( const std::string& target );

};