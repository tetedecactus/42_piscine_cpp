/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:37:41 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 09:58:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "Base.hpp"

Base::~Base() {}

Base* generate( void ) {
    
    int i = (std::rand() % 3);
    
    switch ( i )
    {
    case 0:
        return (new A());
    case 1:
        return (new B());
    default:
        return (new C());
    }
}

void identify( Base* p ) {
    
}

void identify( Base& p ) {
    
}