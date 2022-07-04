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
	std::cout << RED << "Test 1 -> Creer Array de Animal* la moitier est Cat l'autre Dog" << RESET << std::endl;
    Animal* listAnimals[6];

	std::cout << BLUE << "1. Create 3 Cats -> listAnimals[i] =  new Cat()" << RESET << std::endl;
    for ( int i = 0; i < 3; i++ ) {
        listAnimals[i] = new Cat();
		std::cout << YELLOW << "=================================================" << RESET << std::endl;
	}
	std::cout << BLUE << "2. Create 3 Dogs -> listAnimals[i] =  new Dog()" << RESET << std::endl;
    for ( int j = 3; j < 6; j++ ) {
        listAnimals[j] = new Dog();
		std::cout << YELLOW << "=================================================" << RESET << std::endl;
	}
	std::cout << BLUE << "3 they will make their own sound" << RESET << std::endl;
    for ( int i = 0; i < 6; i++ ) 
        listAnimals[i]->makeSound();
	std::cout << YELLOW << "=================================================" << RESET << std::endl;
	std::cout << BLUE << "We delete all Animal*" << RESET << std::endl;
    for ( int i = 0; i < 6; i++ ) {
        delete listAnimals[i];
		std::cout << YELLOW << "=================================================" << RESET << std::endl;
	}
	
	std::cout << RED << "Test 2 -> Creer 1 Cat & 1 Dog et print leur premiere et derniere ideas" << RESET << std::endl;
	std::cout << YELLOW << "=================================================" << RESET << std::endl;
	Cat Garfield;
	std::cout << YELLOW << "=================================================" << RESET << std::endl;
	Dog Sanji;
	std::cout << YELLOW << "=================================================" << RESET << std::endl;

	std::cout << "Cat Garfield ideas 1 : " << Garfield.getBrain()->getIdeas( 0 ) << std::endl;
	std::cout << "Cat Garfield ideas 100 : " << Garfield.getBrain()->getIdeas( 99 ) << std::endl;
	std::cout << YELLOW << "=================================================" << RESET << std::endl;
	std::cout << "Dog Sanji ideas 1 : " << Sanji.getBrain()->getIdeas( 0 ) << std::endl;
	std::cout << "Dog Sanji ideas 100 : " << Sanji.getBrain()->getIdeas( 99 ) << std::endl;
	std::cout << YELLOW << "=================================================" << RESET << std::endl;
    return 0;
}