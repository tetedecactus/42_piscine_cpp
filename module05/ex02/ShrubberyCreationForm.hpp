/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:10 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 10:33:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string _target;
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string& target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm( void );

	virtual void execute( Bureaucrat const & executor ) const;

	void makeAsciiTree( void ) const;

	std::string getTarget( void ) const;

	ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs );
};

