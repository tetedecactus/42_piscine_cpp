/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 23:51:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast() {}
Cast::Cast( std::string arg ) : _arg(arg) {}
Cast::Cast( Cast const & src) { *this = src; }
Cast::~Cast() {}
Cast& Cast::operator=( Cast const & rhs )
{
    _arg = rhs._arg;
    return *this;
}
// ==== GETTER | SETTER =========================
std::string Cast::getArg( void ) const { return _arg; }
void        Cast::setArg( std::string arg ) { _arg = arg; }

// ==== EXCEPTION ===============================
const char* Cast::UnPrintable::what() const throw() { return "The arg can't be display"; }
const char* Cast::ImpossibleCast::what() const throw() { return "Cast Impossible"; }

// ==== METHODS =================================

int Cast::chechArgs( void ) {
    char arg;
    if (!(sscanf(_arg.c_str(), "%c", &arg))  )//|| _arg.size() > 1
        std::cout << "fuck yes" << std::endl;
    std::cout<< static_cast<int>(arg) << std::endl;
    return (static_cast<int>(arg));
}



// new ideas, annaliser largument avec sscanf AVEC c_str function dans tout ses funciton to check lequel il est et ensuite les caster
// throw exception


// le but est que dans chacune de me Methods je check largument avec sscanf puis throw exception ou cast selon result
