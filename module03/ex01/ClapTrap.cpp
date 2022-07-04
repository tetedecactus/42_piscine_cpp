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
ClapTrap::ClapTrap( void ) : name("Fitz Clap"), hitPoint(10), energyPoint(10), attDamage(0) {
    std::cout << GREEN << name << RESET << ": ClapTrap Constructor called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoint(10), energyPoint(10), attDamage(0)
{
    std::cout << GREEN << name << RESET << ": ClapTrap Constructor called and have :" << energyPoint << " of ernergy point" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    *this = src;
    std::cout << YELLOW << this->name << RESET << ": ClapTrap Copy constructor called" << std::endl;
    return ;// Le return pas necessaire (video intra42)
}

ClapTrap::~ClapTrap() { std::cout << RED << name << RESET << ": ClapTrap Destructor called " << std::endl; }

ClapTrap& ClapTrap::operator=( ClapTrap const & rhs ) {

    this->name = rhs.name;
    this->hitPoint = rhs.hitPoint;
    this->energyPoint = rhs.energyPoint;
    this->attDamage = rhs.attDamage;

    return *this;
}

//==========================================================
void ClapTrap::attack( const std::string& target ) {

    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << BLUE << name << RESET << ": Clap Attack :" << target << " causing :" << attDamage << " points of damage" << std::endl;
        energyPoint--;
        return ;
    }
    std::cout << RED << name << RESET << ": got 0 energy point left" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {

    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << GREEN << name << RESET << ": Have been repair of : " << amount << " point of life" << std::endl;
        energyPoint--;
        hitPoint += amount;
        return ;
    }
    std::cout << RED << name << RESET << ": got 0 energy point left" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {

    std::cout  << YELLOW << name << RESET << ": Have take : " << amount << " of damage" << std::endl;
    if (hitPoint - amount <= 0)
        hitPoint = 0;// Pourrais mettre err msg pour quit afther death
    else
        hitPoint -= amount;

}

// ================= Getter fucntion =====================
std::string ClapTrap::getName( void ) const { return this->name; }
int ClapTrap::getEnergyPoint( void ) const { return this->energyPoint; }
int ClapTrap::getAttDamage( void ) const { return this->attDamage; }
int ClapTrap::getHitPoint( void ) const { return this->hitPoint; }

//=================== OTHER FUNCTION ===============

void ClapTrap::printStats( void ) const {
    std::cout << PINK << "Nom : " << this->name << std::endl;
    std::cout << "Hit Point : " << this->hitPoint << std::endl;
    std::cout << "Energy Point : " << this->energyPoint << std::endl;
    std::cout << "Attack Damage : " << this->attDamage << RESET << std::endl;
}