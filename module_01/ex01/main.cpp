/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 11:13:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    std::string input;

	std::cout << BLUE << "Salut men, Bienvenue dans mon programme. Le but de celui-ci : " << RESET;
	std::cout << YELLOW << "Creer et allouer un horde de Zombies sur la HEAP!\n" << RESET << std::endl; sleep(2);
	std::cout << GREEN << "La Horde va etre creer avec la fonction : "<< PINK << "zombieHorde(int N, std::string name)" << RESET << std::endl; sleep(3);
	std::cout << GREEN << "Celle-ci prend comme parametre : N -> Nombre de zombies & NAME -> le nom de ceux-ci" << RESET << std::endl;
    sleep(3);
    std::cout << PINK << "Combien veux-tu creer de Zombie ?" << std::endl;
    std::getline(std::cin, input);
    std::cout << GREEN << "Parfait On vas en creer 3." << RESET << std::endl;
    sleep(3);
    std::cout << RED << "Comme dans l'EX00 tu nommais les zombies comme de la marde ceux-ci vont s'appeler : " << YELLOW << "Jesus fils de dieu" << RESET << std::endl;
    sleep(2);
    Zombie* firstHorde = zombieHorde(3, "Jesus fils de dieu");
    sleep(5);
    std::cout << BLUE << "Comme tu peux voir la horde a ete creer, Maintenant ils vont s'annoncer dans le main() " << RESET << std::endl;
    sleep(3);
    for (int i = 0; i < 3; i++)
		firstHorde[i].announce();
	std::cout << RED << "IMPORTANT! Maintenant ils vont mourir car j'appelle \"delete[]\" a la fin de mon programme pour pas avoir de leaks" << RESET << std::endl;
    sleep(4);
	delete[] firstHorde;
}