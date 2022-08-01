/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:34:34 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 13:34:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

template < typename T >
void iter( T tab[], size_t len, void (*f)(const T&) ) {
    for (size_t i = 0; i < len; i++) 
    {
        (*f)(tab[i]);
    }
}

template < typename T >
void printType(T& type) { std::cout << BLUE << type << RESET << std::endl; }