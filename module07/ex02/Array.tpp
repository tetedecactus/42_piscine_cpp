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

template <typename T> 
void Array<T>::print( T* array)
{
    for (int i = 0; i < _len; i++)
        cout << " " << *(_array + i);
    cout << endl;
}