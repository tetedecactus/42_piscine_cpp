/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/27 19:14:23 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Bureaucrat senior =  Bureaucrat("Pepe", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 2" << RESET << std::endl;
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 1);
		senior.downGrade(149);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
		senior.upGrade(25);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 3" << RESET << std::endl;
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 100);
		senior.upGrade(50);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "TEST 4" << RESET << std::endl;
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 100);
		senior.downGrade(51);
		std::cout << BLUE << senior.getName() << RESET << " : Grade = " << senior.getGrade() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
