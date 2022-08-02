/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 14:39:50 by olabrecq         ###   ########.fr       */
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
	
	std::cout << PINK << "TEST 1" << RESET << std::endl;
	try
	{
		Intern	someRandomIntern;
		Form*	rrf1;
		std::cout << rrf1 << std::endl;; 
		rrf1 = someRandomIntern.makeForm("ShrubberyCreation", "David Smirnoff");
		
		Bureaucrat senior = Bureaucrat("Luffy", 1);

		if (rrf1 == NULL)
			return 1;
		senior.signForm(*rrf1);
		senior.executeForm(*rrf1);
		std::cout << rrf1 << std::endl;; 
		delete rrf1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 2" << RESET << std::endl;
	try
	{
		Intern	someRandomIntern;
		Form*	rrf1;

		rrf1 = someRandomIntern.makeForm("RobotomyRequest", "Pierre Palm Bay");
		
		Bureaucrat senior = Bureaucrat("Zoro", 1);

		if (rrf1 == NULL)
			return 1;
		senior.signForm(*rrf1);
		senior.executeForm(*rrf1);
		delete rrf1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 3" << RESET << std::endl;
	try
	{
		Intern	someRandomIntern;
		Form*	rrf1;

		rrf1 = someRandomIntern.makeForm("PresidentialPardon", "Cindy Coors Light");
		
		Bureaucrat senior = Bureaucrat("Sanji", 1);

		if (rrf1 == NULL)
			return 1;
		senior.signForm(*rrf1);
		senior.executeForm(*rrf1);
		delete rrf1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 4" << RESET << std::endl;
	try
	{
		Intern	someRandomIntern;
		Form*	rrf1;
		Bureaucrat senior = Bureaucrat("Franky", 1);

		rrf1 = someRandomIntern.makeForm("Presidential Pardon", "Bruno Budweiser");
		

		if (rrf1 == NULL)
			return 1;
		senior.signForm(*rrf1);
		senior.executeForm(*rrf1);
		delete rrf1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
	

