/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:37:41 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/04 13:07:35 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Base.hpp"
#include "ABC.hpp"


Base::~Base() {}

Base* generate( void ) {
	
    srand((unsigned)time(0));
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
    
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	
	if ( a != NULL) {
        std::cout << GREEN << "downcast from p to A successful" << RESET << std::endl;
    }
	else if ( b != NULL) {
        std::cout << GREEN << "downcast from p to B successful" << RESET << std::endl;
    }
	else if ( c != NULL) {
        std::cout << GREEN << "downcast from p to C successful" << RESET << std::endl;
    }
	else {
		std::cout << RED << "Cast must Be from Class A, B or C " << RESET << std::endl;
	}
}

void identify( Base& p ) {

	try
	{
		A& a = dynamic_cast<A&>(p);
        std::cout << BLUE << "downcast from p to A successful" << RESET << std::endl;
		(void)a;
	}
	catch(...)
	{
		std::cout << PINK << "downcast from p to A failled" << RESET << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
        std::cout << BLUE << "downcast from p to B successful" << RESET << std::endl;
		(void)b;
	}
	catch(...)
	{
		std::cout << PINK << "downcast from p to B failled" << RESET << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
        std::cout << BLUE << "downcast from p to C successful" << RESET << std::endl;
		(void)c;
	}
	catch(...)
	{
		std::cout << PINK << "downcast from p to C failled" << RESET << std::endl;
	}
    
}