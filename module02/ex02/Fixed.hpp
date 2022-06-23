/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:48:03 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/16 18:48:03 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <unistd.h>
#include <string>
#include <cmath>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class Fixed
{
private:

    int _fixe;
    const static int _nBits;
	std::string name;
    
public:

    Fixed( std::string name );
	Fixed( int const n, std::string name );
	Fixed( float const n, std::string name );
	Fixed( Fixed const & src, std::string name );
    ~Fixed( void );

	Fixed & operator=( Fixed const & rhs );

	Fixed operator+( Fixed const & rhs);
	Fixed operator-( Fixed const & rhs);
	Fixed operator*( Fixed const & rhs);
	Fixed operator/( Fixed const & rhs);

	bool   operator>( Fixed const & rhs ) 	{ return this->getRawBits() > rhs.getRawBits() ? true : false; }
	bool   operator<( Fixed const & rhs ) 	{ return this->getRawBits() < rhs.getRawBits() ? true : false; }
	bool   operator>=( Fixed const & rhs ) 	{ return this->getRawBits() >= rhs.getRawBits() ? true : false; } 
	bool   operator<=( Fixed const & rhs ) 	{ return this->getRawBits() <= rhs.getRawBits() ? true : false; }
	bool   operator==( Fixed const & rhs ) 	{ return this->getRawBits() == rhs.getRawBits() ? true : false; }
	bool   operator!=( Fixed const & rhs ) 	{ return this->getRawBits() != rhs.getRawBits() ? true : false; }
    
	// static int min( )
	int getRawBits( void ) const 			{ return _fixe; }
	void setRaWBits( int const raw )		{ this->_fixe = raw; }
    
	int toInt( void ) const 				{ return _fixe >> _nBits; }
	float toFloat( void ) const 			{ return (float)_fixe / (1 << _nBits); }

	void setName( std::string name ) { this->name = name; }
	std::string getName( void ) const {  return this->name; }
	
};

std::ostream & operator<<( std::ostream & o, Fixed const & i ); // lire la dessu


// A FAIRE
// Les 6 opérateur de comparaison : >, <, >=, <=, == et != --> Bool function
// Les 4 opérateurs de arithmétiques : +, -, *, et /. https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
// Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
//post-incrémentation, pré-décrémentation et post-décrémentation)

//  Une fonction membre statique min prenant en paramètres deux références sur des
	// nombres à virgule fixe et qui retourne le plus petit d’entre eux.
//• Une fonction membre statique min prenant en paramètres deux références sur des
// nombres à virgule fixe constants et qui retourne le plus petit d’entre eux.
// • Une fonction membre statique max prenant en paramètres deux références sur des
// nombres à virgule fixe et qui retourne le plus grand d’entre eux.
// • Une fonction membre statique max prenant en paramètres deux références sur des
// nombres à virgule fixe constants et qui retourne le plus grand d’entre eux.


#endif
