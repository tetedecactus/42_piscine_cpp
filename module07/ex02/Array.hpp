/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:04:11 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 14:04:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

template < typename T >
class Array 
{
    private:
        T* _array;
        unsigned int _len;
    public:
        Array<T>( void );
        Array<T>( unsigned int len );
        Array<T>( Array<T> const & src );
        ~Array<T>( void );

        Array<T>& operator=( Array<T> const & rhs );
}

// https://stackoverflow.com/questions/70175085/is-it-a-good-practice-to-include-the-hpp-in-the-tpp-file