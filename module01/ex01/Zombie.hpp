/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:38:37 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 11:23:33 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <unistd.h>
#include <string>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class Zombie
{
private:
	std::string name;
public:
	void setZombieName(std::string& name) { this->name = name; }

	void announce(void);//announce themselves as follows
	Zombie();
    Zombie(std::string name);
	~Zombie();
};

	Zombie* zombieHorde(int N, std::string name);
	
#endif
