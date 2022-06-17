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

class Weapon
{
private:
    std::string type;
public:
    Weapon( std::string type );
    ~Weapon( void );

    void setType( std::string newType ) { this->type = newType ;}
    std::string const & getType( void ) const { return this->type; }

};

#endif