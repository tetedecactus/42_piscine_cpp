/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:55:11 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/01 12:20:16 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

#include "easyfind.tpp"

class EstPasLaLaValue : public std::exception
{
    virtual const  char* what() const throw() { return ("Value not found"); }
};

// template < typename T >
// T& easyfind( T data, int nb );

// https://cplusplus.com/reference/vector/vector/vector/
// https://en.cppreference.com/w/cpp/container/vector