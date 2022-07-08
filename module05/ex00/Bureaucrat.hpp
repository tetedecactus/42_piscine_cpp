/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:46 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/08 16:32:48 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

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
		
		void GradeTooLowException( void );
		void GradeTooHighException( void );
		
		void increment( void );
		void decrement( void );
	
};

std::ostream & operator<<( std:: ostream & o, Bureaucrat const & i);


#endif