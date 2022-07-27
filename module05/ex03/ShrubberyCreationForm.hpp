/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:10 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 20:59:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	/* data */
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string& target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm( void );

	virtual void execute( Bureaucrat const & executor ) const;

	void makeAsciiTree(  Bureaucrat const & executor ) const;

	ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs );
};

