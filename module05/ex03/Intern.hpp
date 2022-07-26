/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:04:40 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 14:15:33 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;

class Intren 
{
private:
	/* data */
public:
	Intren( void );
	Intren( Intren const & src );
	virtual ~Intren( void );

	Intren& operator=( Intren const & rhs );

	Form* makeForm( std::string& formName, std::string& target );

	Form* makeShrubbery( std::string& target );
	Form* makeRobotomy( std::string& target );
	Form* mkaePresidentialRequest( std::string& target );

};