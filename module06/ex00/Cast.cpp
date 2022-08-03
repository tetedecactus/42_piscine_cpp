/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:45 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 19:28:52 by marvin           ###   ########.fr       */
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

int Cast::checkArgIsDigit( void ) {
    for (size_t i = 0; i < _arg.size(); i++)
    {
        if (i > 1  && isdigit(_arg[i]))
            return -42;
    }
    return 0;
}

int Cast::checkArgs( void ) {
	char arg;
	if (checkArgIsDigit() == -42)
        return -2;
    if (!(sscanf(_arg.c_str(), "%c", &arg)) || _arg.size() > 1 || _arg == "0")
        return -1;
    return (static_cast<int>(arg));
}

int Cast::checkPrecision( void ) {
	unsigned nb;
    unsigned decimal;

    nb = 0;
    while (_arg[nb] && _arg[nb] != '.')
        nb++;
    decimal = nb + 1;
    while (_arg[decimal] && isdigit(_arg[decimal]))
        decimal += 1;
    decimal -= nb;
    return ((_arg.size() == nb || decimal == 1) ? 1 : decimal - 1);
}


void 	Cast::printChar( void ) {
	int arg = checkArgs();
	if ( (arg == -1 && !(sscanf(_arg.c_str(), "%d", &arg))) || arg == -2 )
		throw ImpossibleCast();
	else if ( arg < 32 || arg > 126 )
		throw UnPrintable();
	std::cout << static_cast<char>(arg) << std::endl;
}

void	Cast::printInt( void ) {
	long arg = checkArgs();
	if ( (arg == -1 && !(sscanf(_arg.c_str(), "%ld", &arg))) || (arg == -2 && _arg != "-2") )
		throw ImpossibleCast();
	else if ( arg < INT_MIN || arg > INT_MAX )
		throw UnPrintable();
	std::cout << static_cast<int>(arg) << std::endl;
}

void 	Cast::printFloat( void ) {
	float arg = checkArgs();
	if (arg == -1)
	{
		if (_arg == "-inf" || _arg == "+inf" || _arg == "inf" || _arg == "nan")
		{
			std::cout << _arg << "f" << std::endl;
			return ;
		}
		else if (_arg == "-inff" || _arg == "+inff" || _arg == "inff" || _arg == "nanf")
		{
			std::cout << _arg << std::endl;
			return;			
		}
		else if (!(sscanf(_arg.c_str(), "%f", &arg)))
			throw ImpossibleCast();
	}
    else if ((arg == -2 && _arg != "-2")) {
        throw ImpossibleCast();
    }
	std::cout << std::fixed << std::setprecision(checkPrecision()) << static_cast<float>(arg);//
	std::cout << "f" << std::endl;
}

void	Cast::printDouble( void ) {
	double arg = checkArgs();
	if (arg == -1)
	{
		if (_arg == "-inf" || _arg == "+inf"  || _arg == "inf" || _arg == "nan")
		{
			std::cout << _arg << std::endl;
			return;
		}
		else if (_arg == "-inff" || _arg == "+inff" || _arg == "inff" || _arg == "nanf")
		{
			_arg.resize(_arg.size() - 1);
			std::cout << _arg << std::endl;
		}
		else if (!(sscanf(_arg.c_str(), "%lf", &arg)))
			throw ImpossibleCast();
	}
    else if ((arg == -2 && _arg != "-2")) {
        throw ImpossibleCast();
    }
	std::cout <<  std::fixed << std::setprecision(checkPrecision()) << static_cast<double>(arg) << std::endl;
}
