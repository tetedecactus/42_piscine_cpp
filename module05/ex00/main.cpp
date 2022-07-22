/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/22 17:47:00 by marvin           ###   ########.fr       */
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
	
	Bureaucrat senior("Pepe", 2);
	Bureaucrat Junior;
	
	Junior = senior;

	std::cout << "Junior name : " + Junior.getName() << std::endl;
	
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 1);
		senior.downGrade(149);
		std::cout << BLUE << senior.getName() << " : Grade = " << senior.getGrade() << RESET << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 100);
		senior.upGrade(50);
		std::cout << BLUE << senior.getName() << " : Grade = " << senior.getGrade() << RESET << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat senior =  Bureaucrat("Pepe", 100);
		senior.downGrade(51);
		std::cout << BLUE << senior.getName() << " : Grade = " << senior.getGrade() << RESET << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
