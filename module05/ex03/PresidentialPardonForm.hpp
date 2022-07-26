/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:24 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/25 20:19:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	/* data */
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string& target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	virtual ~PresidentialPardonForm( void );

	virtual void execute( Bureaucrat const & executor ) const;

	void makeAsciiTree(  Bureaucrat const & executor ) const;

	PresidentialPardonForm& operator=( PresidentialPardonForm const & rhs );
};
