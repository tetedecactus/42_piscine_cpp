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
	// std::cout << BLUE << "MAIN DU PDF BOOSTER\n" << RESET << std::endl;
	// Fixed a("A");
	// Fixed const b(( Fixed( 5.05f, "C" ) * Fixed( 2, "D" )), "B" );

	// std::cout << a << ": doit etre = 0" << std::endl;
	// std::cout << ++a << ": doit etre = 0.00390625" << std::endl;
	// std::cout << a << ": doit etre = 0.00390625" << std::endl;
	// std::cout << a++ << ": doit etre = 0.00390625" << std::endl;
	// std::cout << a << ": doit etre = 0.0078125" << std::endl;
	// std::cout << b << ": doit etre = 10.1016" << std::endl;
	// std::cout << Fixed::max( a, b ) << ": doit etre = 10.1016\n\n" << std::endl;

	// ================= MAIN PERSONNEL DE TEST =========================
	std::cout << BLUE << "MAIN PERSONNEL DE TEST\n" << RESET << std::endl;
	Fixed a("A");
	Fixed const b(( Fixed( 5.05f, "Ctemp" ) * Fixed( 2, "Dtemp" )), "B" );
	Fixed const c(( Fixed(10, "Etemp") + Fixed( 2, "Ftemp" )), "C" );
	Fixed const d(( Fixed(10, "Gtemp") - Fixed( 2, "Htemp" )), "D" );
	Fixed const e(( Fixed(10, "Itemp") / Fixed( 2, "Jtemp" )), "E" );

	// "Normal" operator ( *, +, -, / )
	std::cout << a << ": doit etre 0" << std::endl;
	std::cout << b << ": doit etre = 10.1016" << std::endl;
	std::cout << c << ": doit etre 12" << std::endl;
	std::cout << d << ": doit etre 8" << std::endl;
	std::cout << e << ": doit etre 5" << std::endl;

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