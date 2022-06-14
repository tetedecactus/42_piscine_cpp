/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/13 20:13:08 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

//Create a program that takes three parameters in the following order: a filename and
//two strings, s1 and s2.

//It will open the file <filename> and copies its content into a new file
//<filename>.replace, replacing every occurrence of s1 with s2.

//
// str.find() return a size_t of position, If no matches were found, the function returns string::npos.
//str.remplace()
//Psotion = position de find + len de s2
int main(int ac, char** av) 
{
    std::ifstream myFile;
	printf(" ac = %d\n", ac);	
    if (ac != 4) 
	{
        std::cout << RED << "Example of valid input: ./{PROG} {FileName} {String1} {String2}" << std::endl; 
		return 1;
	}
	std::string fileName(av[1]);
	std::cout << fileName << std::endl;
	
	if (fileName == "file.txt") 
	{
		myFile.open(fileName, std::ios::in);
		if (myFile.is_open()) {
			std::cout << GREEN << "FILE OPEN" << RESET << std::endl;
			std::string s1(av[2]), s2(av[3]), line; // Creating variable i need
			while (std::getline(myFile, line)) 
			{
				std::size_t foundStr = line.find(s1);
				while (foundStr != std::string::npos) 
				{
					line.replace(foundStr,s2.length(), s2);
					std::cout << "line = " << line << std::endl;
					foundStr = foundStr + s2.length();
					foundStr = line.find(s1);
				}
				//ICI ecrire line dans un autre file
			}
			myFile.close();
		}
	}
	else {
		std::cout << RED << "Your second argument need to be \"file.txt\"" << RESET << std::endl; 
		return 1;
	}
    
}
