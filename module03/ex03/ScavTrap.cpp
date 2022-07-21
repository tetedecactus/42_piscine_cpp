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
    hitPoint = 100;
    energyPoint = 50;
    attDamage = 20;
    std::cout << BLUE << "ScavTrap " + this->getName() << RESET << ": Constructor ScavTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    hitPoint = 100;
    energyPoint = 50;
    attDamage = 20;
    std::cout << BLUE << "ScavTrap " + this->getName() << RESET << ": Constructor ScavTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) 
{
    *this = src;
    std::cout << BLUE << "ScavTrap " + this->getName() << RESET << ": Copy constructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap() { std::cout << BLUE << "ScavTrap " + this->name << RESET << ": Destructor ScavTrap called " << std::endl; }

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
        std::cout << BLUE << "ScavTrap " + this->getName() << RESET << ": Scav Attack :" << target << " causing :" << attDamage << " points of damage" << std::endl;
        energyPoint--;
        return ;
    }
    std::cout << BLUE << "ScavTrap " + this->getName() << RESET << ":  Scav got 0 energy point left" << std::endl;
}

void ScavTrap::guardGate( void ) const {
    if (hitPoint > 0 && energyPoint > 0)
        std::cout << BLUE << "IMP " << "ScavTrap " + this->getName() << ": is now in Gate Keeper mode" << RESET << std::endl;
}

void printStats( ScavTrap const & scav ) {
    std::cout << YELLOW << "======== STATS ============" << RESET << std::endl;
    std::cout << PINK << "Nom : " << scav.getName() << std::endl;
    std::cout << "Hit Point : " << scav.getHitPoint() << std::endl;
    std::cout << "Energy Point : " << scav.getEnergyPoint() << std::endl;
    std::cout << "Attack Damage : " << scav.getAttDamage() << RESET << std::endl;
}

