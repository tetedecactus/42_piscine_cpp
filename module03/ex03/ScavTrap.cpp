/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:42:47 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/27 19:42:47 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//=================== CONSTRUCTOR & DESTRUCTOR =========================
ScavTrap::ScavTrap( void ) : ClapTrap() {
    name = "Bob Scav";
    hitPoint = 100;
    energyPoint = 50;
    attDamage = 20;
    std::cout << GREEN << name << RESET << ": Constructor ScavTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    hitPoint = 100;
    energyPoint = 50;
    attDamage = 20;
    std::cout << GREEN << name << RESET << ": Constructor ScavTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) 
{
    *this = src;
    std::cout << YELLOW << this->name << RESET << ": Copy constructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap() { std::cout << RED << name << RESET << ": Destructor ScavTrap called " << std::endl; }

//==================== ASSIGNEMENT OPERATOR ================================

ScavTrap& ScavTrap::operator=( ScavTrap const & rhs ) {

    this->name = rhs.name;
    this->hitPoint = rhs.hitPoint;
    this->energyPoint = rhs.energyPoint;
    this->attDamage = rhs.attDamage;

    return *this;
}

//===================== MEMBER FUNCTION =================================

void ScavTrap::attack( const std::string& target ) {
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << BLUE << name << RESET << ": Scav Attack :" << target << " causing :" << attDamage << " points of damage" << std::endl;
        energyPoint--;
        return ;
    }
    std::cout << RED << name << RESET << ":  Scav got 0 energy point left" << std::endl;
}

void ScavTrap::guardGate( void ) const {
    if (hitPoint > 0 && energyPoint > 0)
        std::cout << RED << "IMP " << name << ": is now in Gate Keeper mode" << RESET << std::endl;
}

void ScavTrap::printStats( void ) const {
    std::cout << PINK << "Nom : " << this->name << std::endl;
    std::cout << "Hit Point : " << this->hitPoint << std::endl;
    std::cout << "Energy Point : " << this->energyPoint << std::endl;
    std::cout << "Attack Damage : " << this->attDamage << RESET << std::endl;
}