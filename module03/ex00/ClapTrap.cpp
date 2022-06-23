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
    std::cout << GREEN << _name << ": Constructor called " << RESET << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src, std::string name ) : _name(name), hitPoint(10), energyPoint(10), attDamage(0)
{
    *this = src;
    std::cout << YELLOW << this->_name << ": Copy constructor called" << RESET << std::endl;
    return ;
}
ClapTrap::~ClapTrap()
{
    std::cout << RED << _name ": Destructor called " << RESET << std::endl;
}

// ClapTrap& ClapTrap::operator=( ClapTrap const & rhs ) {

// }

//==========================================================
void ClapTrap::attack( const std::string& target ) {
    std::cout << BLUE << this._name << ": Attack :" << target << "causing :" << this->hitPoint << " points of damage" << RESET << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << GREEN << this._name << ": Have been repair of : " << amount << " point of life" << RESET << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
    std::cout  << YELLOW << this._name << ": Have take : " << amount << " of damage" << RESET << std::endl;
}