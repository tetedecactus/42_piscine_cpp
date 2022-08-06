/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:55:19 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/06 12:27:35 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
int main()
{
	{
		std::vector<int> v;
		v.push_back(4);
		v.push_back(1);
		v.push_back(8);
		v.push_back(3);
		
		std::cout << PINK << "TEST 1" << RESET << std::endl;
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
		try
		{
			easyfind(v, 8);
			/* code */
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			easyfind(v, 1);
			/* code */
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		v.clear();
	}
	return 0;
}