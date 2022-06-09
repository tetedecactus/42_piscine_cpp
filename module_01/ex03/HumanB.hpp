/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:30:23 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 13:30:24 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{
private:
    Weapon weapon;
    std:: bNamel
public:
    HumanB(std::string name, Weapon weapon);
    ~HumanB();
    void attack();
    void setWeapon(Weapon weapon);
};

#endif