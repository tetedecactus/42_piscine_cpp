/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal(), type("Dog")
{
    std::cout << "Dog Constructor Called" << std::endl; 
}

Dog::Dog( Dog const & src ) : Animal()
{
    *this = src;
    std::cout << "Dog Copy Constructor Called" << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs )
{
    type = rhs.type;
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "WRAFFF WAFFF WOOF Where my dogg at !!!!" << std::endl;
}

std::string Dog::getType( void ) const { return type; }