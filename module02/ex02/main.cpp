/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/16 18:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed a("A");
	// Fixed const b(( Fixed( 5.05f, "C" ) * Fixed( 2, "D" )), "B" );
	// Fixed b("B");
	// Fixed C("C");

	// a.setRaWBits( 5 );
	// b.setRaWBits( 2 );
	// C = a * b;
	// std::cout << C << std::endl;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// // std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
// 0
// 0.00390625
// 0.00390625
// 0.00390625

// 0.0078125
// 10.1016
// 10.1016
