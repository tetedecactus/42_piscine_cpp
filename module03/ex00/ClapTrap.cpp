/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:37:49 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/22 17:37:49 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

//========= CONSTRUCTOR & DESTRUCTOR=====================//
ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( std::string name ) : _name(name), hitPoint(10), energyPoint(10), attDamage(0)
{
    std::cout << GREEN << _name << RESET << ": Constructor called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src, std::string name ) : _name(name), hitPoint(10), energyPoint(10), attDamage(0)
{
    *this = src;
    std::cout << YELLOW << this->_name << RESET << ": Copy constructor called" << std::endl;
    return ;
}
ClapTrap::~ClapTrap()
{
    std::cout << RED << _name << RESET << ": Destructor called " << std::endl;
}

// ClapTrap& ClapTrap::operator=( ClapTrap const & rhs ) {

// }

//==========================================================
void ClapTrap::attack( const std::string& target ) {
    std::cout << BLUE << this->_name << RESET << ": Attack :" << target << " causing :" << this->hitPoint << " points of damage" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << GREEN << this->_name << RESET << ": Have been repair of : " << amount << " point of life" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
    std::cout  << YELLOW << this->_name << RESET << ": Have take : " << amount << " of damage" << std::endl;
}