/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:59:30 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 21:59:30 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
    std::cout << "Animal Constructor Called" << std::endl; 
}

Animal::Animal( Animal const & src ) : type("Animal")
{
    *this = src;
    std::cout << "Animal Copy Constructor Called" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
    type = rhs.type;
    return *this;
}

void Animal::makeSound( void ) const {
    std::cout << "Futur meat( animal ) make noise" << std::endl;
}

std::string Animal::getType( void ) const { return this->type; }


//=============== Wrong Animal ======================

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
    std::cout << "WrongAnimal Constructor Called" << std::endl; 
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
    *this = src;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
    type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WRONGGGG ANIMAL NOISE !" << std::endl;
}

std::string WrongAnimal::getType( void ) const { return this->type; }