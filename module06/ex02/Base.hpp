/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:32:56 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 12:36:49 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

#include <iostream>
#include <cstdlib>
#include <exception>


class Base
{
	public:
		virtual ~Base();
};

Base* generate( void );
void identify( Base* p);
void identify( Base& p);


// https://en.cppreference.com/w/cpp/language/dynamic_cast

// 3) If new-type is a pointer or reference to Base, and the type of expression is a pointer or reference to 
// Derived, where Base is a unique, accessible base class of Derived, the result is a pointer or reference to the 
// Base class subobject within the Derived object pointed or identified by expression. (Note: an implicit conversion and static_cast can perform this conversion as well.)