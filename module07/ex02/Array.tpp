/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:04:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 14:04:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array<T>( void ) 
{
    new _array[0];
}

Array::Array<T>( unsigned int len ) 
{
    new _array[len];
}

Array::Array<T>( Array<T> const & src )
{

}

Array::~Array<T>( void ) 
{
    delete _array[];
}

Array::Array<T>& operator=( Array<T> const & rhs )
{
    
}