/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:16:38 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 15:44:45 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "easyfind.hpp"
#include <vector>


template < typename T >
void  easyfind( T* data, int nb ) {
	for ( int i = 0; data[i] != 0; i++)
	{
		if ( data[i] == nb )
			std::cout << GREEN << "Found it!!" << RESET << std::endl;
	}
	std::cout << RED << "Value didnt found" << RESET << std::endl;
}
