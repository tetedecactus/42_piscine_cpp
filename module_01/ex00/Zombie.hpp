/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:38:37 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/07 20:08:02 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <unistd.h>

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
	void announce(void);//announce themselves as follows
	Zombie* newZombie(std::string name);//It creates a zombie, name it, and return it so you can use it outside of the function scope.
	void randomChump(std::string name); //It creates a zombie, name it, and the zombie announces itself.
	Zombie(std::string name);
	~Zombie();
};

#endif

// Now, what is the actual point of the exercise? You have to determine in what case
// it’s better to allocate the zombies on the stack or heap.