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

// void Animal::makeSound( void ) const {
//     std::cout << "Futur meat( animal ) make noise" << std::endl;
// }

std::string Animal::getType( void ) const { return this->type; }