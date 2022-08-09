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
    Span list(10);

	// list.addNumberRage(0, 8);
	list.addNumber(1);
	// list.addNumber(4);
	// list.addNumber(7);
	list.addNumber(100);
	list.addNumber(3);
	list.addNumber(1);

	std::vector<int> tab;
	tab.push_back(2);
	tab.push_back(9);
	tab.push_back(4);
	tab.push_back(5);
	tab.push_back(7);

	try
	{
		list.addNumberRange(tab.begin(), tab.end());
		// list.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	// std::cout << "Distance = " << list.longestSpan() << std::endl;


	list.printSpan();
}