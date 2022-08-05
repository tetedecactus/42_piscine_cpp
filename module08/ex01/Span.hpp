/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:37:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/05 09:37:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>


class Span
{
    private:
        /* data */
    public:
        Span( void );
        Span();
        Span( const Span& src );
        ~Span( void );
        Span& operator=( const Span& rhs )
};

