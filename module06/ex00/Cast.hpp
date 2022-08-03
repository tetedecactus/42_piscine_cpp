/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                  		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:39:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/02 22:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

#include <iostream>
#include <cstdio>
#include <cstring>// c_str
#include <bits/stdc++.h>// INT_MIN //INT MAX -> WSL
#include <limits>
#include <exception>

class Cast
{
	private:
		std::string _arg;
	public:
		Cast( void );
		Cast( std::string arg );
		Cast( Cast const & src);
		~Cast();
		Cast& operator=( Cast const & rhs );
		
		// ==== GETTER | SETTER =========================
		std::string getArg( void ) const;
		void        setArg( std::string );

		// ==== METHODS =================================
		int chechArgs( void );
		int checkPrecission( void );

		void 	printChar( void );
		void	printInt( void );
		void 	printFloat( void );
		void	printDouble( void );

		// ==== EXCEPTION ===============================
		class ImpossibleCast : public std::exception
		{
			virtual const char* what() const throw();
		};

		class UnPrintable : public std::exception
		{
			virtual const char* what() const throw();
		};
		
};

// C_stt



// : char, int, float ou double.
// https://cplusplus.com/reference/string/string/c_str/
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// https://en.cppreference.com/w/cpp/language/static_cast
// https://cplusplus.com/reference/memory/static_pointer_cast/
// https://www.programiz.com/cpp-programming/library-function/cstdio/sscanf


// https://en.cppreference.com/w/cpp/numeric/math/isnan
// https://en.cppreference.com/w/cpp/numeric/math/isinf
// https://en.cppreference.com/w/cpp/numeric/math/nan
// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c