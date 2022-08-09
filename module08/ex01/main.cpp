/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:36:34 by marvin            #+#    #+#             */
/*   Updated: 2022/08/05 09:36:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span list(6);

	list.addNumberRage(0, 8);
	// list.addNumber(1);
	// list.addNumber(4);
	// list.addNumber(7);
	// list.addNumber(100);
	// list.addNumber(3);
	// list.addNumber(1);

	try
	{
		list.addNumber(8);
		list.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	std::cout << "Distance = " << list.longestSpan() << std::endl;


	list.printSpan();
}