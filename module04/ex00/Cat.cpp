/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal(), type("Cat")
{
    std::cout << "Cat Constructor Called" << std::endl; 
}

Cat::Cat( Cat const & src ) : Animal()
{
    *this = src;
    std::cout << "Cat Copy Constructor Called" << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat & Cat::operator=( Cat const & rhs )
{
    type = rhs.type;
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "MIAWWWOUUUUU!!!!" << std::endl;
}

//============= WrongCat =========================

WrongCat::WrongCat( void ) : WrongAnimal(), type("WrongCat")
{
    std::cout << "WrongCat Constructor Called" << std::endl; 
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal()
{
    *this = src;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
    type = rhs.type;
    return *this;
}

void WrongCat::makeSound( void ) const {
    std::cout << "WRONGGGG ANIMAL NOISE !" << std::endl;
}