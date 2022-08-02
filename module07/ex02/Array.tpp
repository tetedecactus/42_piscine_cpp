/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:57:26 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 16:57:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template < typename T >
Array<T>::Array( void ) : _array(NULL), _len(0) {}

template < typename T >
Array<T>::Array( unsigned int len)
{
    _array = new T[len];
    _len = len;
}

template < typename T >
Array<T>::Array( Array<T> const & src )
{
   *this = src;
}

template < typename T >
Array<T>::~Array( void )
{
    if ( _array == NULL )
        delete[] _array;
    // delete _array;
}

template < typename T > 
void Array<T>::print( T* array)
{
    for (unsigned int i = 0; i < _len; i++)
        std::cout << " " << *(array + i);
    std::cout << std::endl;
}

// template < typename T >
// Array<T> & Array::operator=( Array<T> const & rhs )
// {
//     _array = rhs._array;
//     _len = rhs._len;
// }