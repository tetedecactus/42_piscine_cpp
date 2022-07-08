/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:54 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 21:49:54 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* dogBrain;
public:
    Dog( void );
    Dog( Dog const & src );
    virtual ~Dog();

    Dog& operator=( Dog const & rhs );
    
    virtual std::string getType( void ) const;

    virtual void makeSound( void ) const;
	Brain* getBrain( void ) const;


protected:
    std::string type;

};

#endif