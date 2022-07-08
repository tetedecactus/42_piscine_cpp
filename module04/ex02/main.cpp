/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:01:20 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:01:20 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

int main()
{
	std::cout << GREEN << "Le but de cet Ex etait d'implementer la classe Animal de facon Abstrait pour que l'ont puisse pas l'utiliser ses methode, mais les utiliser ses child class" << RESET << std::endl;
	std::cout << GREEN << "Pour tester, je vais creer 6 Animal" << std::endl;
	std::cout << "1ier & 2ieme animal vont etre de type Dog & type Animal* Dog" << std::endl;
	std::cout << "3ieme & 4ieme animal vont etre de type Cat & de type Animal* Cat" << std::endl;
	std::cout << "5ieme & 6ieme animal vont etre de type Animal & Animal* Animal( will fail )" << RESET << std::endl;

	std::cout << RED << "TEST : 1 -> TYPE DOG" << RESET << std::endl;
	{
	Animal *sanji =  new Dog();
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	Dog doggo;
	std::cout << BLUE << "===============================================================" << RESET << std::endl;

	doggo.makeSound();
	sanji->makeSound();
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	delete sanji;
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	}

	std::cout << RED << "TEST : 1 -> TYPE DOG" << RESET << std::endl;
	{
	Animal *shanks =  new Cat();
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	Cat colonel;
	std::cout << BLUE << "===============================================================" << RESET << std::endl;

	colonel.makeSound();
	shanks->makeSound();
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	delete shanks;
	std::cout << BLUE << "===============================================================" << RESET << std::endl;
	}

	// std::cout << RED << "TEST : 3 -> TYPE ANIMAL" << RESET << std::endl;
	// {
	// Animal *animal =  new Dog();
	// std::cout << BLUE << "===============================================================" << RESET << std::endl;
	// Animal ani;
	// std::cout << BLUE << "===============================================================" << RESET << std::endl;

	// ani.makeSound();
	// animal->makeSound();
	// delete animal;
	// std::cout << BLUE << "===============================================================" << RESET << std::endl;
	// }
    return 0;
}