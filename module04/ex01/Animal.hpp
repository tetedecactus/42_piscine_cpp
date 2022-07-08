/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:54 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 21:49:54 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <unistd.h>
#include <string>
#include "Brain.hpp"

class Animal
{
private:
    /* data */
public:
    Animal( void );
    Animal( Animal const & src );
    virtual ~Animal();

    Animal& operator=( Animal const & rhs );

    virtual std::string getType( void ) const;

    virtual void makeSound( void ) const;

protected:
    std::string type;

};

#endif