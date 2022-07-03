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

int main()
{
    Animal* listAnimals[6];

	std::cout << "1. Create 50 Cats -> listAnimals[i] =  new Cat()" << std::endl;
    for ( int i = 0; i < 3; i++ )
        listAnimals[i] = new Cat();// Doit init avec() pour un copie profonde
	// std::cout << "2. Create 50 Dogs -> listAnimals[i] =  new Dog()" << std::endl;
    for ( int j = 3; j < 6; j++ )
        listAnimals[j] = new Dog();
	std::cout << "3 they will make their own sound and print their first and last ideas, cause they have a brain" << std::endl;
    for ( int i = 0; i < 6; i++ ) 
        listAnimals[i]->makeSound();
	
    for ( int i = 0; i < 6; i++ )
        delete listAnimals[i];
	
	Cat Garfield;
	Dog Sanji;

	std::cout << "ideas 1 : " << Garfield.getBrain().getIdeas( 1 ) << std::endl;
	std::cout << "Sanji ideas 100 : " << Sanji.getBrain().getIdeas( 99 ) << std::endl;
    return 0;
}