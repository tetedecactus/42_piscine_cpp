/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:32:14 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 21:00:25 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

#include <cstdint> // uintptr_t 
#include <iostream>

typedef struct Data {
	int nb;
	std::string str;
	double d;
} Data;


// https://en.cppreference.com/w/cpp/language/reinterpret_cast
// https://cplusplus.com/reference/cstdint/

// Unlike static_cast, but like const_cast, 
// the reinterpret_cast expression does not compile to any CPU instructions 
// (except when converting between integers and pointers or on obscure architectures where pointer representation depends on its type).
//  It is purely a compile-time directive which instructs the compiler to treat expression as if it had the type 

// uintptr_t 
// Integer type capable of holding a value converted from a void pointer and then be converted back to that type with a value that compares equal to the original pointer.
// Optional: These typedefs may not be defined in some library implementations.*