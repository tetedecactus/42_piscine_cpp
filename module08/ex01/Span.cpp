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


Span::Span( void ) : _V(0), _N(0)
{
	
}

Span::Span( unsigned int N ) : _N(N)
{
	_V.reserve(N);
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
	_V = rhs._V;
	_N = rhs._N;

	return *this;
}


// ======= EXCEPTION ==============
const char* Span::AlreadyFull::what() const throw() { return "The Span array is already full | element can't be added"; }
const char* Span::NoDistancePossible::what() const throw() { return "No distance Possible ( Span got 1 or 0 element )"; }
const char* Span::RangeTooHigh::what() const throw() { return "Range is larger than the Span Array"; }

// ========= METHODS ===============

void Span::addNumber( int N ) {
	if (_V.size() >= _N)
		throw AlreadyFull();
	_V.push_back( N );
}

void Span::addNumberRange( std::vector<int>::iterator FirstN, std::vector<int>::iterator secondN ) {
	if (std::distance(FirstN, secondN) + _V.size() >= _N)
		throw RangeTooHigh();
	else
		for(std::vector<int>::iterator it = _V.begin() ; it != _V.end(); ++it)
			addNumber(*it);
}

// unsigned int Span::shortestSpan( void ) const {

// 	if ( _V.size() <= 1 )
// 		throw NoDistancePossible();

// 	return ;
// }

unsigned int Span::longestSpan( void ) const {
	if ( _V.size() <= 1 )
		throw NoDistancePossible();
	return (*max_element(_V.begin(), _V.end()) - *min_element(_V.begin(), _V.end()));
}

void Span::printSpan( void ) {
	for (size_t i = 0; i < _V.size(); i++)
	{
		std::cout << "Vector[i] = " << _V[i] << std::endl;
	}
	
}