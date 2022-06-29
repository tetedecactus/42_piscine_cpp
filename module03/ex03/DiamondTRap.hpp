/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:00:47 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 18:00:47 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ClapTrap.hpp"

class DiamondTrap
{
private:
    /* data */
public:
    DiamondTrap(/* args */);
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const & src );
    virtual ~DiamondTrap();

    DiamondTrap& operator=( DiamondTrap const & rhs );
};

#endif