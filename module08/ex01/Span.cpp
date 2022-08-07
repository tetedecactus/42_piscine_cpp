/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:38:10 by marvin            #+#    #+#             */
/*   Updated: 2022/08/05 09:38:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span( void ) : V(0), _N(0)
{
	
}

Span::Span( unsigned int N ) : _N(N)
{
	V.reserve(N);
}

Span::Span( const Span& src )
{
	*this = src;
}

Span::~Span( void )
{
}

Span& Span::operator=( const Span& rhs )
{
	V = rhs.V;
	_N = rhs._N;

	return *this;
}


// ======= EXCEPTION ==============
const char* Span::alreadyFull::what() const throw() { return "The Span array is already full | element can't be added"; }
const char* Span::NoDistancePossible::what() const throw() { return "No distance Possible ( Span got 1 or 0 element )"; }

// ========= METHODS ===============

void Span::addNumber( int N ) {
	if (V.size() >= _N)
		throw alreadyFull();
	V.push_back( N );
}

unsigned int Span::shortestSpan( void ) const {

	if ( V.size() <= 1 )
		throw NoDistancePossible();

	return ;
}

unsigned int Span::longestSpan( void ) const {
	if ( V.size() <= 1 )
		throw NoDistancePossible();
	return (*max_element(V.begin(), V.end()) - *min_element(V.begin(), V.end()));
}

void Span::printSpan( void ) {
	for (size_t i = 0; i < V.size(); i++)
	{
		std::cout << "V[i] = " << V[i] << std::endl;
	}
	
}