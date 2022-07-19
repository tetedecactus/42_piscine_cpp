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

// https://cplusplus.com/doc/tutorial/inheritance/
// https://cplusplus.com/doc/tutorial/polymorphism/
// https://www.geeksforgeeks.org/inheritance-in-c/?ref=lbp
// https://www.youtube.com/watch?v=V_kB7LXkIbc&list=PLeBlObWk0duSNURllEcqH1FN7Z4-L4DZf

class ClapTrap
{
protected:// pour quil sois use by members of derived class 
    std::string name;
    int hitPoint; //life
    int energyPoint; //stamina
    int attDamage; 

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const & src );
    virtual ~ClapTrap();

    ClapTrap& operator=( ClapTrap const & rhs ); 

    virtual void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

	std::string getName( void ) const;
	int getEnergyPoint( void ) const;
	int getAttDamage( void ) const;
	int getHitPoint( void ) const;
    
};
void printStats( ClapTrap const & clap );

#endif