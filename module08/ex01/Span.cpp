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
const char* Span::AlreadyFullException::what() const throw() { return "The Span array is already full | element can't be added"; }
const char* Span::NoDistancePossibleException::what() const throw() { return "No distance Possible ( Span got 1 or 0 element )"; }
const char* Span::RangeTooHighException::what() const throw() { return "Range is larger than the Span Array"; }

// ========= METHODS ===============

void Span::addNumber( int N ) {
	if (_V.size() >= _N)
		throw AlreadyFullException();
	_V.push_back( N );
}

void Span::addNumberRange( std::vector<int>::iterator FirstN, std::vector<int>::iterator secondN ) {
	if (std::distance(FirstN, secondN) > _N)
		throw RangeTooHighException();
	else
		for(std::vector<int>::iterator it = FirstN ; it != secondN; ++it)
			addNumber(*it);
}


unsigned int Span::shortestSpan( void ) {
	if (_V.size() <= 1)
		throw NoDistancePossibleException();
	std::vector<int>::iterator it1 = _V.begin();
	std::vector<int>::iterator ite = _V.end();
	int min = INT_MAX;

	for(; it1 != ite; it1++)
	{
		for (std::vector<int>::iterator it2 = (it1 + 1); it2 != ite; it2++)
			if (std::abs(*it1 - *it2) < min)
				min = std::abs(*it1 - *it2);
	}
	return min;
}

unsigned int Span::longestSpan( void ) {
	if ( _V.size() <= 1 )
		throw NoDistancePossibleException();
	return (*max_element(_V.begin(), _V.end()) - *min_element(_V.begin(), _V.end()));
}

void Span::printSpan( void ) {
	std::vector<int>::iterator it = _V.begin();
	std::vector<int>::iterator ite = _V.end();
		while(it != ite)
			std::cout << *it++ << '\n';
}