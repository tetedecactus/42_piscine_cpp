/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 13:30:19 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define  WEAPON_H

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    ~Weapon();

    void setType(std::string newType) { this->type = newType ;}
    void getType() { return const$ type ;}
};

#endif