/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                  		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:39:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/02 22:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>// INT_MIN //INT MAX -> WSL
#include <limits>

class Cast
{
	private:
		std::string _arg;
	public:
		Cast( void );
		Cast( std::string arg );
		Cast::Cast( Cast const & src);
		~Cast();
		Cast& operator=( Cast const & rhs );

		
};




// : char, int, float ou double.
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// https://en.cppreference.com/w/cpp/language/static_cast
// https://cplusplus.com/reference/memory/static_pointer_cast/
// https://www.programiz.com/cpp-programming/library-function/cstdio/sscanf


// https://en.cppreference.com/w/cpp/numeric/math/isnan
// https://en.cppreference.com/w/cpp/numeric/math/isinf
// https://en.cppreference.com/w/cpp/numeric/math/nan
// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c