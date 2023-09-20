/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:16:38 by olabrecq          #+#    #+#             */
/*   Updated: 2023/09/19 18:05:09 by olabrecq         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once 

#include "easyfind.hpp"

template < typename T >
void  easyfind( T data, int value ) {
	// PREMIERE VERSION
	// if (std::find(data.begin(), data.end(), value) == data.end())
	// 	std::cout << GREEN << "Value found" << RESET << std::endl;
	// else
	// 	std::cout << RED << "Value didnt found" << RESET << std::endl;
	
	//DEUXIEME VERSION
	// if (std::find(data.begin(), data.end(), value) != data.end()) {
	// 	std::vector<int>::iterator it = std::find(data.begin(), data.end(), value);
	// 	int index = it - data.begin();
	// 	std::cout << GREEN << "First occurance of : " << value << " found at position : " << index << RESET << std::endl;
	// }
	// else
	// 	throw EstPasLaLaValue();
	
	// VERSION FINAL!!
	if (std::find(data.begin(), data.end(), value) == data.end()) 
		throw EstPasLaLaValue();
	std::vector<int>::iterator it = std::find(data.begin(), data.end(), value);
	int index = it - data.begin();
	std::cout << GREEN << "First occurance of : " << value << " found at position : " << index << RESET << std::endl;
}

// https://www.delftstack.com/howto/cpp/cpp-find-element-in-vector/