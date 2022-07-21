/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:15:59 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/21 14:48:15 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"



class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		unsigned int _gradeToSigned;
		unsigned int _gradeToExec;
	public:
		Form( void );
		Form( std::string name, int gradeToSigned, int gradeToexec );
		Form( Form const & src );
		~Form( void );
		Form& operator=( Form const & rhs );
		
		void beSigned( Bureaucrat& signataire );

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};
};
std::ostream & operator<<( std:: ostream & o, Form const & i);


