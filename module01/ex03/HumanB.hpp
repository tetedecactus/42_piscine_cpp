/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:23 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/18 16:58:04 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string bName;
    Weapon* bWeapon;

public:
    HumanB( std::string name );
    ~HumanB( void );

    void attack( void );
    void setWeapon( Weapon& weapon ) { bWeapon = &weapon; }
};

#endif