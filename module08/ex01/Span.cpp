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

Span::Span( unsigned int N ) :  V(N), _N(N)
{
	std::cout << "V size = " << V.size() << std::endl;
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

// ========= METHODS ===============

void Span::addNumber( unsigned int N ) {
	if (V.size() > _N)
		throw alreadyFull();
	V.assign(1, N);
}

// unsigned int Span::shortestSpan( void ) const {

// }

// unsigned int Span::longestSpan( void ) const {

// }

void Span::printSpan( void ) {
	for (size_t i = 0; i < V.size(); i++)
	{
		std::cout << "V[i] = " << V[i] << std::endl;
	}
	
}