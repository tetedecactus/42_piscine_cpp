/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:49:40 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/28 16:49:40 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( FragTrap const & src );
    virtual ~FragTrap();

    FragTrap& operator=( FragTrap const & rhs );

    void highFivesGuys( void ) const;

	void setAttDamage( void );
	virtual int getAttDamage( void) const;
};

#endif