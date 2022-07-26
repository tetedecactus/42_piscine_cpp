/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:39:35 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/25 20:12:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	/* data */
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string& target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm& operator=( RobotomyRequestForm const & rhs );

	virtual void execute( Bureaucrat const & executor ) const;
};

