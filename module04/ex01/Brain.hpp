/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Dog.hpp"
#include "Cat.hpp"

class Brain : public Cat, public Dog
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}


#endif