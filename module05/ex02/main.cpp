/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/23 18:03:22 by olabrecq         ###   ########.fr       */
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
		std::cout << "==========================" << std::endl;
		Bureaucrat junior("olivier", 4);
		std::cout << "==========================" << std::endl;
		
		junior.signForm(form);
		junior.downGrade(2);
		junior.signForm(form);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=============FIN TEST 1=============" << std::endl;
	
	std::cout << PINK << "TEST 2" << RESET << std::endl;
	try
	{
		Form form ("Rfc-401", 10, 5);
		std::cout << "==========================" << std::endl;
		Bureaucrat senior("Javier", 11);
		std::cout << "==========================" << std::endl;

		senior.signForm(form);
		senior.upGrade(8);
		senior.signForm(form);
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===========FIN TEST 2===============" << std::endl;
	
	std::cout << PINK << "TEST 3" << RESET << std::endl;
	try
	{
		Form form ("PFK bari-bari", 1, 2);
		std::cout << "==========================" << std::endl;
		Bureaucrat senior("Mario", 1);
		std::cout << "==========================" << std::endl;

		senior.signForm(form);
		senior.downGrade(180);
		senior.signForm(form);
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "============FIN TEST 3==============" << std::endl;
	
	std::cout << PINK << "TEST 4" << RESET << std::endl;
	try
	{
		Form form ("A&W - FC", 160, 26);
		std::cout << "==========================" << std::endl;
		Bureaucrat senior("Luigi", 100);
		std::cout << "==========================" << std::endl;

		senior.signForm(form);
		senior.upGrade(180);
		senior.signForm(form);
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=============FIN TEST 4=============" << std::endl;
	
	std::cout << PINK << "TEST 5" << RESET << std::endl;
	try
	{
		Form form ("GP-L09-301-D", 150, 26);
		std::cout << "==========================" << std::endl;
		Bureaucrat senior("Peach", 151);
		std::cout << "==========================" << std::endl;

		senior.signForm(form);
		senior.upGrade(100);
		senior.signForm(form);
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=============FIN TEST 5=============" << std::endl;

}
