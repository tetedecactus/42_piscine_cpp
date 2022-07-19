/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:46 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/19 14:18:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, unsigned int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );
		
		Bureaucrat& operator=( Bureaucrat const & rhs );
		
		void setGrade( unsigned int grade );
		std::string getName( void ) const;
		unsigned int getGrade(void);
		
		class GradeTooHighException : std::exception
		{
			
		}
		class GradeTooLowException : std::exception 
		{
			
		}
		
		
		void increment( void );
		void decrement( void );
	
};

std::ostream & operator<<( std:: ostream & o, Bureaucrat const & i);



// https://stackoverflow.com/questions/40205581/throw-a-exception-with-nested-class-that-inherited-stdexception
// https://cplusplus.com/reference/exception/nested_exception/
