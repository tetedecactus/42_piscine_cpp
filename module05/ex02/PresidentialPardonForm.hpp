/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:24 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 11:14:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string _target;
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( const std::string& target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	virtual ~PresidentialPardonForm( void );

	virtual void execute( Bureaucrat const & executor ) const;

	void makeAsciiTree(  Bureaucrat const & executor ) const;

	std::string getTarget( void ) const;

	PresidentialPardonForm& operator=( PresidentialPardonForm const & rhs );
};
