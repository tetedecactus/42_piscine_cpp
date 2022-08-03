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

class Cast
{
	private:
		char 	_c;
		bool	_isC;

		int 	_i;
		bool 	_isI;

		double 	_d;
		bool 	_isD;
		
		float 	_f;
		bool 	_isF;
	public:
		Cast(/* args */);
		~Cast();
};




// : char, int, float ou double.
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// https://en.cppreference.com/w/cpp/language/static_cast
// https://cplusplus.com/reference/memory/static_pointer_cast/

// https://en.cppreference.com/w/cpp/numeric/math/isnan
// https://en.cppreference.com/w/cpp/numeric/math/isinf
// https://en.cppreference.com/w/cpp/numeric/math/nan
// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c