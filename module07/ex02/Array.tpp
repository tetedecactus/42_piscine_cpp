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
class Array 
{
    private:
        T* _array;
        unsigned int _len;
    public:
        Array<T>( void ) : _array(NULL), _len(0) {}

        Array<T>( unsigned int len )
		{
			_array = new T[len];
			_len = len;
		}

        Array<T>( Array<T> const & src )
		{
			*this = src;
			return ;
		}

        ~Array<T>( void )
		{
			if ( _array != NULL )
				delete[] _array;
		}

        Array<T>& operator=( Array<T> const & rhs )
		{
			_len = rhs._len;
			_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len;i++)
				_array[i] = rhs._array[i];
			return *this;
		}

        //============== OPERATOR[] ==============
        Array<T>& operator[]( size_t pos )
        {
            if (pos > _len || pos < 0)
                throw ElementNotFound();
            return _array[ pos ];
        }

        //=============== EXCEPTION =============
        class ElementNotFound : public std::exception
        {
            virtual const char* what() const throw() {return "Element number can't be found";};
        };

        //============== SIZE(getLen()) ======================
        size_t size( void ) const
        {
            return getLen();
        }

        //==================== GETTER SETTER PRINTER =============
        void print( void )
		{
			for (unsigned int i = 0; i < _len; i++)
				std::cout << " " << *(_array + i);
			std::cout << std::endl;
		}

		void setArray(T* array, size_t len)
		{
			for (size_t i = 0; i < len; i++)
				_array[i] = array[i];
		}

        void setLen( unsigned int len ) { _len = len; }

        unsigned int getLen( void ) const { return _len; }

		T* getArray( void ) const { return _array; }
};
// std::ostream& operator<<( std::ostream & o, Array<T> const & src );

