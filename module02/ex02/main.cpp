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
	//========== MAIN DE L'EXEMPLE DU PDF ===========
	{
		std::cout << BLUE << "MAIN DU PDF BOOSTER\n" << RESET << std::endl;
		Fixed a;
		Fixed const b( (Fixed( 5.05f ) * Fixed( 2 )) );

		std::cout << a << ": doit etre = 0" << std::endl;
		std::cout << ++a << ": doit etre = 0.00390625" << std::endl;
		std::cout << a << ": doit etre = 0.00390625" << std::endl;
		std::cout << a++ << ": doit etre = 0.00390625" << std::endl;
		std::cout << a << ": doit etre = 0.0078125" << std::endl;
		std::cout << b << ": doit etre = 10.1016" << std::endl;
		std::cout << Fixed::max( a, b ) << ": doit etre = 10.1016\n\n" << std::endl;
	}

	// ================= MAIN PERSONNEL DE TEST =========================
	std::cout << BLUE << "MAIN PERSONNEL DE TEST\n" << RESET << std::endl;
	Fixed a;
	Fixed const b( (Fixed( 5.05f ) * Fixed( 2 )) );
	Fixed const c( (Fixed( 10 ) + Fixed( 2.5f )) );
	Fixed const d( (Fixed( 10 ) - Fixed( 2.5f )) );
	Fixed const e( (Fixed( 10 ) / Fixed( 2 )) );

	// "Normal" operator ( *, +, -, / )
	std::cout << "a =" << a << ": doit etre 0" << std::endl;
	std::cout << "b =" << b << ": doit etre = 10.1016" << std::endl;
	std::cout << "c =" << c << ": doit etre 12.5" << std::endl;
	std::cout << "d =" << d << ": doit etre 7.5" << std::endl;
	std::cout << "e =" << e << ": doit etre 5" << std::endl;

	// bool overload operator **MUST HAVE 3xYESS
	if ( a < b) // should be true
		std::cout << " YESS" << std::endl;
	if ( a <= b) // should be true
		std::cout << " YESS" << std::endl;
	if ( a > b) // should be false
		std::cout << " YESS" << std::endl;
	if ( a >= b) // should be false
		std::cout << " YESS" << std::endl;
	if ( a == b) // should be false
		std::cout << " YESS" << std::endl;
	if ( a != b) // should be true
		std::cout << " YESS" << std::endl;


	return 0;
	
}