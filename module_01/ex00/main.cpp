/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 08:10:30 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// A FAIRE - > SINFORMER SUR ZOMBIE* newZombie() --> (le pointeur)
// DEMANDER CE QUE LE PROGRAMME EST SUPPOSER FAIRE CLAIRMENT
// REGUARDER VIDEO INTRA 
// LIRE SUR LE SUJET
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
	std:getline(std::cin, firstNameInput); firstNameInput = "Pere-Noel"; sleep(2);
	std::cout << "Premier Zombie : " << PINK << firstNameInput << RESET << std::endl; sleep(2);
	std::cout << RED << "WTF .. For real c'est zero original ton criss de nom" << RESET << std::endl; sleep(2);
	std::cout << BLUE << "Entre ton deuxieme nom et essaie de faire mieu stp parce que la tu fais dur" << std::endl;
	std::getline(std::cin, secondNameInput); secondNameInput = "Celine Dion"; sleep(2);
	std::cout << "Deuxieme Zombie : " << PINK << secondNameInput << RESET << std::endl; sleep(2);
	std::cout << RED << "Ok fuck it serieux avec tes osti d'nom d'vidange" << RESET << std::endl; sleep(2);
	
	std::cout << GREEN << "Check on va commencer.. sans commantaire..." << RESET << std::endl; sleep(2);
	std::cout << RED << "IMPORTANT!!" << RESET << std::endl; sleep(2);
	
	std::cout << GREEN << "On cree le premier Zombie en apellant le constructeur -> : " << PINK << "Zombie fisrtZombie(\"Pere-Noel\")" << RESET << std::endl; sleep(3);
	Zombie firstZombie("Pere-Noel");
	std::cout << BLUE << "Bon fack la On va envoyer Pere-Noel a :" << RED << " Zombie* newZombie(\"Pere-Noel\")" << RESET << std::endl;
	firstZombie.newZombie("Pere-Noel");
	std::cout << BLUE << "Maintenant que Pere-Noel est vivant on l'envois dans la fonction " << PINK << " Zombie* newZombie(std::string name)" << RESET << std::endl;
	
	
	// std::cout << GREEN << "Puis maintenant on cree le Deuxieme -> : " << PINK << "Zombie secondZombie(\"Celine Dion\")" << RESET << std::endl; sleep (2);
	// Zombie secondZombie("Celine Dion");
	
	// std::cout 	CE QUE CEST SUPPOSER FAIRE !!! DEMANDER QUESTION RELIRE LA PDF
	// std::cout << BLUE << " "
	
}