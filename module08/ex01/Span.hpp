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

#include <iostream>
#include <vector>
#include <exception>

class Span
{
    private:
		std::vector<int> V;
        unsigned int _N;
    public:
        Span( void );
        Span( unsigned int N );
        Span( const Span& src );
        ~Span( void );
        Span& operator=( const Span& rhs );

		class alreadyFull : public std::exception
		{
			virtual const char* what() const throw();
		};

		void addNumber( unsigned int N );
		unsigned int shortestSpan( void ) const;
		unsigned int longestSpan( void ) const;


		void printSpan( void );

};

// https://en.cppreference.com/w/cpp/iterator/iterator
// https://cplusplus.com/reference/algorithm/find/
// https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-iterator-define.html