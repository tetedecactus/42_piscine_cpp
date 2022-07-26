/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/25 20:33:13 by marvin           ###   ########.fr       */
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
		newBuisson->beSigned(senior);
		newBuisson->execute(senior);
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
		Bureaucrat senior("Goku", 34);
		newRobot->beSigned(senior);
		newRobot->execute(senior);
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
		Form* newRobot =  new PresidentialPardonForm();
		Bureaucrat senior("Goku", 34);
		newRobot->beSigned(senior);
		newRobot->execute(senior);
		delete newRobot;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
