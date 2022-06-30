/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:38:13 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/22 17:38:13 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <unistd.h>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class ClapTrap
{
private:
    std::string name;
    int hitPoint;// life
    int energyPoint; // stamina
    int attDamage; 

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap();

    ClapTrap& operator=( ClapTrap const & rhs ); 

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );


	std::string getName( void ) 	{ return this->name; }
	int getEnergyPoint( void ) 		{ return this->energyPoint; }
	int getAttDamage( void ) 		{ return this->attDamage; }
	int getHitPoint( void ) 		{ return this->hitPoint; }

    void printStats( void ) const;
};



#endif