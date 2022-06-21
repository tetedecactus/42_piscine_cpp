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
Fixed::Fixed( void )  : _fixe( 0 ) { std::cout << GREEN << "Default Constructor Called" << RESET << std::endl; }

Fixed::Fixed( int const n ) : _fixe( n << _nBits ) { std::cout << YELLOW << "Int constructor Called" << RESET << std::endl; }

Fixed::Fixed( float const n ) : _fixe(roundf(n * (float)(1 << _nBits))) { std::cout << YELLOW << "Float constructor Called" << RESET << std::endl; }

Fixed::Fixed( Fixed const & src ) {
	std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) { std::cout << RED << "Destructor Called" << RESET << std::endl; }

//====== OPERATOR ======================================

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << YELLOW << "Copy assignement operator Called" << RESET << std::endl;
	if (this != &rhs)
		this->_fixe = rhs.getRawBits();

	return *this;
}





std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << PINK << "The value of _fixe is : " << RESET << i.toFloat();

	return o;
}