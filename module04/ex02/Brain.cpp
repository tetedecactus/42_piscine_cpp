/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	setIdeas();
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain const & src )
{
    *this = src;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=( Brain const & rhs )
{
    for ( int i = 0; i < 100; i++ )
		ideas[i] = rhs.ideas[i];
    return *this;
}

void Brain::setIdeas( void ) {
	for ( int i = 0; i < 100; i++ )
		ideas[i] = "J'ai faim";
}

std::string Brain::getIdeas( int index ) {
	if (index < 100 && index >= 0) {
		return (this->ideas[index]);
	}
	else 
		return ("Index invalid");
}