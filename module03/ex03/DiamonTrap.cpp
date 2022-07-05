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
    name = "DIDIDIAMOND";
	ClapTrap::name = "DIDIDIAMOND_clap_name";
    hitPoint = FragTrap::hitPoint; // 100
    energyPoint = ScavTrap::energyPoint; // 50
	FragTrap::setAttDamage();
    attDamage = FragTrap::getAttDamage(); // 30
    std::cout << GREEN << name << RESET << ": Constructor DiamondTrap called and have :" << energyPoint << " of ernergy point" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), name(name) {

	// ClapTrap::name =  name +"_clap_name";
    // name = name;
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

    this->name = rhs.name;
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
    std::cout << "I am : " << RED << name << RESET << std::endl;
}
