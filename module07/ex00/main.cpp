/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:31:25 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/05 15:06:36 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

	std::cout << PINK << "TEST 1 => INT" << RESET << std::endl;
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << PINK << "TEST 2 => STRING" << RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << PINK << "TEST 3 => FLOAT" << RESET << std::endl;
	float e = 42.69f;
	float f = 69.42f;
	
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << PINK << "TEST 3 => FLOAT" << RESET << std::endl;
	double u = 42.69777f;
	double g = 69.42777f;
	
	::swap(u, g);
	std::cout << "e = " << u << ", f = " << g << std::endl;
	std::cout << "min( e, f ) = " << ::min( u, g ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( u, g ) << std::endl;

	return 0;
}