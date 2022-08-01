/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:35 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 11:21:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string _target;
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const std::string& target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm& operator=( RobotomyRequestForm const & rhs );
	
	std::string getTarget( void ) const;

	virtual void execute( Bureaucrat const & executor ) const;
};

