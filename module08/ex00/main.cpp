/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:55:19 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 20:45:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
int main()
{
  	std::vector<int> v;
	v.push_back(4);
	v.push_back(1);
	v.push_back(8);
	v.push_back(3);
	

	try
	{
		easyfind(v, 4);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(v, 7);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// easyfind(v, 9);
	// easyfind(v, 42);
	// easyfind(v, 69);
	// easyfind(v, 1);
	
}