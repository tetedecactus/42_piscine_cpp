/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/27 19:44:48 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac > 1) {
		std::cout << "This program take only his executable in parameter" << std::endl;
		return 1;
	}
	
	//145, 137
	std::cout << PINK << "TEST 1" << RESET << std::endl;
	try
	{
		Form* newBuisson =  new ShrubberyCreationForm();
		Bureaucrat senior("Goku", 1);
		senior.signForm(*newBuisson);
		senior.executeForm(*newBuisson);
		delete newBuisson;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 1.2" << RESET << std::endl;
	try
	{
		Form* newBuisson =  new ShrubberyCreationForm();
		Bureaucrat senior("Goku", 1);
		senior.downGrade(137);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
		senior.signForm(*newBuisson);
		senior.executeForm(*newBuisson);
		delete newBuisson;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	// 72 , 45
	std::cout << PINK << "TEST 2" << RESET << std::endl;
	try
	{
		Form* newRobot =  new RobotomyRequestForm();
		Bureaucrat senior("Chopper", 34);
		senior.signForm(*newRobot);
		senior.executeForm(*newRobot);
		delete newRobot;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 2.2" << RESET << std::endl;
	try
	{
		Form* newRobot =  new RobotomyRequestForm();
		Bureaucrat senior("Chopper", 34);
		senior.downGrade(11);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
		senior.signForm(*newRobot);
		senior.executeForm(*newRobot);
		delete newRobot;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// 25, 5
	std::cout << PINK << "TEST 3" << RESET << std::endl;
	try
	{
		Form* newPres =  new PresidentialPardonForm();
		Bureaucrat senior("Garp", 34);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
		senior.signForm(*newPres);
		senior.executeForm(*newPres);
		delete newPres;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PINK << "TEST 3.2" << RESET << std::endl;
	try
	{
		Form* newPres =  new PresidentialPardonForm();
		Bureaucrat senior("Garp", 34);
		senior.signForm(*newPres);
		senior.upGrade(30);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
		senior.executeForm(*newPres);
		delete newPres;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
