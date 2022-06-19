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

Fixed::Fixed( void ) {
	setRaWBits( 0 ); 
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = src;

	return;
}
Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << YELLOW << "Copy assignement operator called" << RESET << std::endl;
	if (this != &rhs)
		this->_fixe = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << PINK << "getRawBits member function called" << RESET << std::endl;
	return _fixe;
}

void Fixed::setRaWBits( int const raw ) {
	this->_fixe = raw;
}