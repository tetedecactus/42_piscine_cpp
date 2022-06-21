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
	std::cout << GREEN << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed( int const n ) : fixe( n ) {
	std::cout << YELLOW << "Parametruc Constructor Called" << RESET << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void ) {
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}