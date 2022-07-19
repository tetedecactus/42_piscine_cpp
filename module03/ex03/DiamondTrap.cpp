/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:00:24 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 18:00:24 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//=================== CONSTRUCTOR & DESTRUCTOR =========================
DiamondTrap::DiamondTrap( void ) : ClapTrap() {
    _name = "Dianne-diamond";
    hitPoint = FragTrap::hitPoint; // 100
    energyPoint = ScavTrap::energyPoint; // 50
	FragTrap::setAttDamage();
    attDamage = FragTrap::getAttDamage(); // 30
    std::cout << GREEN << "DiamondTrap " + _name << RESET << ": Constructor DiamondTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_diamond_name") {

    _name = name;
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    FragTrap::setAttDamage();
    std::cout << GREEN << "DiamondTrap " + _name << RESET << ": Constructor DiamondTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src)
{
    *this = src;
    std::cout << GREEN << "DiamondTrap " + this->_name << RESET << ": Copy constructor DiamondTrap called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap() { std::cout << GREEN<< "DiamondTrap " + _name << RESET << ": Destructor DiamondTrap called " << std::endl; }

//==================== ASSIGNEMENT OPERATOR ================================

DiamondTrap& DiamondTrap::operator=( DiamondTrap const & rhs ) {

    this->_name = rhs.name;
    this->hitPoint = rhs.hitPoint;
    this->energyPoint = rhs.energyPoint;
    this->attDamage = rhs.attDamage;
    return *this;
};

//====================== ATTACK =====================================

void DiamondTrap::attack( const std::string& target ) {
    ScavTrap::attack(target);
}

//================= WHOAMI ============================

void DiamondTrap::whoAmI( void ) const {
    std::cout << "I am : " << RED << "DiamondTrap " + _name << RESET << std::endl;
}

void printStats( DiamondTrap const & diamond ) {
    std::cout << YELLOW << "======== STATS ============" << RESET << std::endl;
    std::cout << PINK << "Nom : " << diamond.getName() << std::endl;
    std::cout << "Hit Point : " << diamond.getHitPoint() << std::endl;
    std::cout << "Energy Point : " << diamond.getEnergyPoint() << std::endl;
    std::cout << "Attack Damage : " << diamond.getAttDamage() << RESET << std::endl;
}
