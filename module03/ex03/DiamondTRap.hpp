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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const & src );
    virtual ~DiamondTrap(  void );

    virtual void attack( const std::string& target );

    DiamondTrap& operator=( DiamondTrap const & rhs );

    void whoAmI( void ) const;
};

#endif
//https://stackoverflow.com/questions/34228048/error-message-non-static-member-found-in-multiple-base-class-subobjects-of-type