/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:49:54 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 21:49:54 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat( void );
    Cat( Cat const & src );
    virtual ~Cat();

    Cat& operator=( Cat const & rhs );
    
    virtual std::string getType( void ) const;

    virtual void makeSound( void ) const;

protected:
    std::string type;

};

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat( void );
    WrongCat( WrongCat const & src );
    virtual ~WrongCat();

    WrongCat& operator=( WrongCat const & rhs );

    virtual std::string getType( void ) const;
    
    void makeSound( void ) const;

protected:
    std::string type;

};

#endif