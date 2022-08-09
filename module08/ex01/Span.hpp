/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:37:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/05 09:37:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

class Span
{
    private:
		std::vector<int> _V;
        unsigned int _N;
    public:
        Span( void );
        Span( unsigned int N );
        Span( const Span& src );
        ~Span( void );
        Span& operator=( const Span& rhs );

		class AlreadyFullException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NoDistancePossibleException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class RangeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		void addNumber( int N );
		void addNumberRange( std::vector<int>::iterator firstN, std::vector<int>::iterator secondN );
		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );

		void printSpan( void );

};

// https://en.cppreference.com/w/cpp/iterator/iterator
// https://cplusplus.com/reference/algorithm/find/
// https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-iterator-define.html
// https://en.cppreference.com/w/cpp/algorithm/max_element
// https://en.cppreference.com/w/cpp/algorithm/min_element
// https://en.cppreference.com/w/cpp/utility/in_range
// https://www.geeksforgeeks.org/iterators-c-stl/