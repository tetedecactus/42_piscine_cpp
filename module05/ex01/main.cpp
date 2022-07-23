/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:45:28 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/23 01:36:31 by marvin           ###   ########.fr       */
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
	
	Bureaucrat junior("olivier", 100);
	Bureaucrat senior("hadibou", 1);
	Form form("b-99", 500, 1);
	// form.beSigned(senior);
	// form.beSigned(junior);
}
