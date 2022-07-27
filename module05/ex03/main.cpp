/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 21:12:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

	
int	main(void)
{
	Intern	someRandomIntern;
	Form*	rrf1;

	rrf1 = someRandomIntern.makeForm("ShrubberyCreation", "David Smirnoff");
	
	Bureaucrat isa = Bureaucrat("Jean-Claude Van Dram", 1);

	if (rrf1 == NULL)
		return 1;
	isa.signForm(*rrf1);
	isa.executeForm(*rrf1);
	delete rrf1;


	return 0;
}
	

