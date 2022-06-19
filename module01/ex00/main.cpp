/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/18 16:51:23 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	std::string firstNameInput;
	std::string secondNameInput;

	std::cout << BLUE << "Salut men, Bienvenue dans mon programme. Le but de celui-ci : " << RESET;
	std::cout << BLUE << "Determiner dans quel cas il est mieu d'allouer \"the Zombies\" sur la STACK ou la HEAP!\n" << RESET << std::endl; sleep(2);
	
	std::cout << GREEN << "Ce qu'on va faire, on va creer 2 Zombies, avec 2 fonctions differente\n" << RESET << std::endl; sleep(3);
	std::cout << GREEN << "Premiere fonction -> :" << PINK << " Zombie* newZombie(std::string name)" << RESET << std::endl;
	std::cout << RED << "IMPORTANT, cette fonction cree un Zombie sur la HEAP, il est declarer comme suis : " << YELLOW << "Zombie* new " << RED <<" newZombie\n\n" << RESET << std::endl;
	std::cout << GREEN << "Deuxieme fonction -> :" << PINK << " randomChump(std::string name)" << RESET << std::endl; sleep(2);
	std::cout << RED << "IMPORTANT, cette fonction cree un Zombie sur la STACK, il est declarer comme suis : " << YELLOW << "Zombie" << RED << " newZombie\n" << RESET << std::endl; 
	
	std::cout << BLUE << "Entre le nom du premier zombie " << std::endl;
	std::getline(std::cin, firstNameInput); firstNameInput = "Pere-Noel"; sleep(2);
	std::cout << "Premier Zombie : " << PINK << firstNameInput << RESET << std::endl; sleep(2);
	std::cout << BLUE << "Entre le nom du deuxieme zombie" << std::endl;
	std::getline(std::cin, secondNameInput); secondNameInput = "Celine Dion"; sleep(2);
	std::cout << "Deuxieme Zombie : " << PINK << secondNameInput << RESET << std::endl; sleep(2);
	
	std::cout << RED << "IMPORTANT!!" << RESET << std::endl; sleep(2);
	
	std::cout << GREEN << "On cree le premier Zombie en apellant le constructeur & la fonction newZombie(sting name)  : " << PINK << "Zombie* fisrtZombie = newZombie(\"Pere-Noel\")" << RESET << std::endl; sleep(3);
	Zombie* firstZombie = newZombie("Pere-Noel");
	firstZombie->announce();
	std::cout << BLUE << "Donc nous avons creer un Zombie allouer sur la HEAP que je peux utiliser partout." << RESET << std::endl; sleep(3);
	std::cout << GREEN << "Maintenant on va creer un zombie sur la stack qui sera utilisable seulement dans le scope de sa fonction.." << RESET << std::endl; sleep(2);
	std::cout << RED << "IMPORTANT!! le deuixieme zombie va prendre vie au debut de sa fonction et va mourir quand elle vas quitter celle-ci : " << PINK << "ramdomChump(\"Celine Dion\")" << RESET << std::endl; sleep(2);
	randomChump("Celine Dion");
	std::cout << BLUE << "Maintenant on peu quitter le programme et delete Pere-Noel qui est sur la stack avec : " << PINK << "delete firstZombie" << RESET << std::endl;
	delete firstZombie;
}