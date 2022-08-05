/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:16:38 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 20:45:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "easyfind.hpp"

template < typename T >
void  easyfind( T data, int value ) {
	
	// if (std::find(data.begin(), data.end(), value) == data.end())
	// 	std::cout << GREEN << "Value found" << RESET << std::endl;
	// else
	// 	std::cout << RED << "Value didnt found" << RESET << std::endl;
	if (std::find(data.begin(), data.end(), value) != data.end())
		std::cout << GREEN << "Value found : " << value << RESET << std::endl;
	else
		throw EstPasLaLaValue();
}

// https://www.delftstack.com/howto/cpp/cpp-find-element-in-vector/