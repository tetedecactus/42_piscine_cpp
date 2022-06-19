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

Fixed::Fixed( void ) : _fixe( 0 ) {
	std::cout << GREEN << "Default Constructor Called" << RESET << std::endl;
}

// Fixed::Fixed( int const n ) : fixe( n ) {
// 	std::cout << YELLOW << "Parametruc Constructor Called" << RESET << std::endl;
// }

Fixed::Fixed( Fixed const & src ) {
	std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
	*this = src;

	return;
}
Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << YELLOW << "Copy Assignement operator Called" << RESET << std::endl;
	if (this != &rhs)
		this->_fixe = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << PINK << "getRawBits member function called" << RESET << std::endl;
	return _fixe;
}