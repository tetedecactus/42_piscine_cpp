/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:46:02 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 13:46:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << PINK << "TEST 1 => INT" << RESET << std::endl;
    std::cout << GREEN << "Got Int Array of [0,1,2,3,4,5]" << RESET << std::endl;
    int array[6] = {0,1,2,3,4,5};
    std::cout << GREEN << "Now iter gonna print those value below" << RESET << std::endl;
    iter( array, 6, &printType ); 


    std::cout << PINK << "TEST 2 => STRING" << RESET << std::endl;
    std::cout << YELLOW << "Got String Array of [Bonjour, Quebec, City, Vous, Allez, Bien?]" << RESET << std::endl;
    std::string sArray[6] = {"Bonjour", "Quebec", "City", "Vous", "Allez", "Bien?"};
    std::cout << GREEN << "Now iter gonna print those value below" << RESET << std::endl;
    iter( sArray, 6, &printType );

    std::cout << PINK << "TEST 3 => FLOAT" << RESET << std::endl;
    std::cout << RED << "Got Flaot Array of [11.11f, 22.22f, 33.33f, 44.44f, 55.55f, 66.66f]" << RESET << std::endl;
    float fArray[6] = {11.11f, 22.22f, 33.33f, 44.44f, 55.55f, 66.66f};
    std::cout << GREEN << "Now iter gonna print those value below" << RESET << std::endl;
    iter( fArray, 6, &printType ); 
}