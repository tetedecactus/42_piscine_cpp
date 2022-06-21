/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/20 13:35:02 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void ) {

    {
        Weapon club = Weapon( "crude spiked club" );
        HumanA bob("Bob", club );
        bob.attack();
        club.setType( "some other type of club" );
        bob.attack();
    }
    {
        Weapon knife = Weapon( "15cm hunting knife" );
        HumanB jim( "Jim" );
        jim.attack();
        jim.setWeapon( knife );
        jim.attack();
        knife.setType( "some other big knife" );
        jim.attack();
    }
    return 0;
}