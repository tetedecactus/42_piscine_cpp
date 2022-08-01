/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 17:03:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
Array<T>::~Array( void )
{
    delete[] _array;
}

template <typename T> void Array<T>::print( T* _array)
{
    for (int i = 0; i < _len; i++)
        cout << " " << *(_array + i);
    cout << endl;
}