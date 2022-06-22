/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:48:08 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/16 18:48:08 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//====== STATIC INITILIZATION ==========
const int Fixed::_nBits( 8 );

//======== CONSTRUCTOR & DESTRUCTOR =============================
Fixed::Fixed( std::string name )  : _fixe( 0 ), name(name) { std::cout << GREEN << name << ": Default Constructor Called" << RESET << std::endl; }

Fixed::Fixed( int const n, std::string name ) : _fixe( n << _nBits ), name(name) { std::cout << YELLOW << name << ": Int constructor Called" << RESET << std::endl; }

Fixed::Fixed( float const n, std::string name ) : _fixe(roundf(n * (float)(1 << _nBits))), name(name) { std::cout << YELLOW << name << ": Float constructor Called" << RESET << std::endl; }

Fixed::Fixed( Fixed const & src, std::string name ) : name(name) {
	std::cout << BLUE << name << ": Copy Constructor Called" << RESET << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) { std::cout << RED << name << ": Destructor Called" << RESET << std::endl; }

//====== OPERATOR ======================================

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << YELLOW << rhs.name << ": Copy assignement operator Called" << RESET << std::endl;
	if (this != &rhs)
		this->_fixe = rhs.getRawBits();

	return *this;
}

Fixed Fixed::operator+( Fixed const & rhs ) {
	Fixed fixi("fixi + ");
	fixi._fixe = this->getRawBits() + rhs.getRawBits();// est-ce que je peu remplace getRAW par _fixe ????
	return fixi;
}

Fixed Fixed::operator-( Fixed const & rhs ) {
	Fixed fixi("fixi - ");
	fixi._fixe = this->getRawBits() - rhs.getRawBits();// est-ce que je peu remplace getRAW par _fixe ????
	return fixi;
}

Fixed Fixed::operator*( Fixed const & rhs ) {
	Fixed fixi("fixi * ");
	fixi._fixe = this->toFloat() * rhs.toFloat();// est-ce que je peu remplace getRAW par _fixe ????
	return fixi;
}

Fixed Fixed::operator/( Fixed const & rhs ) {
	Fixed fixi("fixi / ");
	fixi._fixe = this->getRawBits() / rhs.getRawBits();// est-ce que je peu remplace getRAW par _fixe ????
	return fixi;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << PINK << i.getName() <<": The value of _fixe is : " << RESET << i.toFloat();

	return o;
}