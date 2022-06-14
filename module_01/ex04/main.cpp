/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/14 12:37:43 by olabrecq         ###   ########.fr       */
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
    if (ac != 4) 
	{
        std::cout << RED << "Example of valid input: ./{PROG} {FileName} {String1} {String2}" << std::endl; 
		return 1;
	}
	std::string fileName(av[1]);// Cree une string a partir du av[1]
	std::string replaceFileName(av[1]);
	std::size_t foundLast = replaceFileName.rfind(replaceFileName);
	if (foundLast == std::string::npos)
	{
		std::cout << RED << "[FILE].replace cant be created" << RESET <<std::endl;
		return 1;
	}
	replaceFileName.append(".replace", foundLast, 8);//Cree une string av[1]+".replace"
	std::ofstream myReplaceFile; // Cree fichier "[FileName].replace"
	myFile.open(fileName, std::ios::in);// File que je lis
	if (myFile.is_open() && myFile.peek() != std::ifstream::traits_type::eof())// check si file existe et n'est pas vide
	{
		myReplaceFile.open(replaceFileName, std::ios::out);// ouvre "[FileName].replace"
		if (myReplaceFile.is_open()) 
		{
			std::string s1(av[2]), s2(av[3]), line; // Creating variable i need
			while (std::getline(myFile, line)) 
			{
				std::size_t foundStr = line.find(s1);
				while (foundStr != std::string::npos)// check la meme ligne pour replacer toute les s1
				{
					line.replace(foundStr,s2.length(), s2);
					foundStr = foundStr + s2.length();
					foundStr = line.find(s1);
				}
				myReplaceFile << line;
				myReplaceFile << "\n";
			}
			myReplaceFile.close();
		}
		else
		{
			std::cout << RED << "file.replace dont opend retry pls" << RESET << std::endl;
			myFile.close();
			return 1;
		}
		myFile.close();
	}
	else
	{
		std::cout << RED << "Your second argument need to be a existing file with string inside" << RESET << std::endl; 
		myFile.close();
		return 1;
	}
}
