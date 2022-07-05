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
    _name = "DIDIDIAMOND";
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    attDamage = FragTrap::attDamage;
    std::cout << GREEN << name << RESET << ": Constructor DiamondTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap() {

	ClapTrap::name =  _name +"_clap_name";
    _name = name;
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    attDamage = FragTrap::attDamage;
    std::cout << GREEN << name << RESET << ": Constructor DiamondTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src)
{
    *this = src;
    std::cout << YELLOW << this->name << RESET << ": Copy constructor DiamondTrap called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap() { std::cout << RED << name << RESET << ": Destructor DiamondTrap called " << std::endl; }

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
    std::cout << "I am : " << RED << _name << RESET << std::endl;
}
