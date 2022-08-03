/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 23:06:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast() {}

Cast::Cast( std::string arg ) : _arg(arg) {}

Cast::Cast( Cast const & src) { *this = src; }

Cast::~Cast() {}

Cast& operator=( Cast const & rhs )
{
    _arg = rhs._arg;
    return *this;
}


// new ideas, annaliser largument avec sscanf dans tout ses funciton to check lequel il est et ensuite les caster
// throw exception
