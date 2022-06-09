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

class HumanA
{
private:
    Weapon weapon;
    std::string aName;
public:
    HumanA(std::string name, Weapon weapon);
    ~HumanA();
    void attack();
};

#endif