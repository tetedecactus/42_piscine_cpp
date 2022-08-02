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
#include "Array.tpp"

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

        // Array<T> & operator=( Array<T> const & rhs );

        void print( T* array );
};
// std::ostream& operator<<( std::ostream & o, Array<T> const & src );



// https://stackoverflow.com/questions/44774036/why-use-a-tpp-file-when-implementing-templated-functions-and-classes-defined-i
// https://www.geeksforgeeks.org/templates-cpp/
// https://stackoverflow.com/questions/70175085/is-it-a-good-practice-to-include-the-hpp-in-the-tpp-file

//  Construction sans paramètres : crée un array vide. -x
// • Construction avec un paramètre de type unsigned int n : crée un array de n
// éléments initialisés par défaut. -x
// Conseil : Essayez de compiler int * a = new int(); puis affichez *a. -x


// • Construction par recopie et surcharge de l’opérateur d’affectation. Dans les deux
// cas, après une copie, toute modification de l’array original ou de sa copie ne doit
// pas impacter l’autre array.

// • Vous DEVEZ utiliser l’opérateur new[] pour allouer de la mémoire. Toute allocation 
// préventive (c’est-à-dire allouer de la mémoire en avance) est interdite. Votre
// programme ne doit pas pouvoir accéder à une zone non allouée.

// • Les éléments doivent être accessibles grâce à l’opérateur d’indice : [ ].

// • En cas d’index invalide lors d’une tentative d’accès d’un élément en utilisant l’opérateur [ ], 
// une std::exception est jetée.

// • Une fonction membre size() qui retourne le nombre d’éléments dans l’array. Cette
// fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance courante.
