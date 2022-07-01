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
    Animal* listAnimals[100];

    for ( int i = 0; i < 50; i++ )
        listAnimals[i] = new Cat();
    for ( int j = 49; j < 100; j++ )
        listAnimals[j] = new Dog();
    for ( int i = 0; i < 100; i++ )
        listAnimals[i]->makeSound();
    for ( int i = 0; i < 100; i++ )
        delete listAnimals[i];

    return 0;
}