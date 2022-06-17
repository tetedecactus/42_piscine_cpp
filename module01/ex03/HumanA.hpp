/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 13:30:30 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
    std::string aName;
    Weapon& aWeapon;
public:
    HumanA( std::string name, Weapon& weapon ) : aName(name), aWeapon(weapon) {};
    ~HumanA( void );

    void attack( void );
    Weapon& getWeapon( void ) { return this->aWeapon; }
};

#endif