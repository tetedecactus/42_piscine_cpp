/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 14:33:21 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac > 1) {
		std::cout << "This program take only his executable in parameter" << std::endl;
		return 1;
	}
		
	std::cout << PINK << "TEST 1" << RESET << std::endl;
	try
	{
		Form form("b-99", 5, 1);
		Form form_b = form;
		Bureaucrat junior("olivier", 4);
		junior.signForm(form);
		junior.downGrade(2);
		junior.signForm(form);
		std::cout << form_b;
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 2" << RESET << std::endl;
	try
	{
		Form form ("Rfc-401", 10, 5);
		Bureaucrat senior("Javier", 11);
		senior.signForm(form);
		senior.upGrade(8);
		senior.signForm(form);
		std::cout << form;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 3" << RESET << std::endl;
	try
	{
		Form form ("PFK bari-bari", 1, 2);
		Bureaucrat senior("Mario", 1);
		std::cout << form;
		senior.signForm(form);
		senior.downGrade(150);
		senior.signForm(form);
		std::cout << form;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 4" << RESET << std::endl;
	try
	{
		Form form ("A&W - FC", 160, 26);
		Bureaucrat senior("Luigi", 100);
		senior.signForm(form);
		senior.upGrade(180);
		senior.signForm(form);
		std::cout << form;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 5" << RESET << std::endl;
	try
	{
		Form form ("GP-L09-301-D", 150, 26);
		Bureaucrat senior("Peach", 150);
		senior.signForm(form);
		senior.downGrade(100);
		senior.signForm(form);
		std::cout << form;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}