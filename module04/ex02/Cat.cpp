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
    catBrain = new Brain;
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
    delete catBrain;
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat & Cat::operator=( Cat const & rhs )
{
    catBrain = new Brain(*rhs.catBrain); // copie profonde
    type = rhs.type;
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "MIAWWWOUUUUU!!!!" << std::endl;
}

std::string Cat::getType( void ) const { return type; }
Brain* Cat::getBrain( void ) const { return catBrain; }