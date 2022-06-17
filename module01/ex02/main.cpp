/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 10:35:45 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define RED "\033[0;31m"
# define RESET "\033[0m"

int main() {

    std::string mainSTR = "HI THIS IS BRAIN";
    std::string* stringPTR = &mainSTR;
    std::string& stringREF = mainSTR;

    std::cout << "Write a program that contains:\n"
                 "• A string variable initialized to \"HI THIS IS BRAIN\".\n"
                 "• stringPTR: A pointer to the string.\n"
                 "• stringREF: A reference to the string." << std::endl;
    std::cout << "===========================================================" << std::endl;
    std::cout << "Your program has to print:\n"
                 "• The memory address of the string variable.\n"
                 "• The memory address held by stringPTR.\n"
                 "• The memory address held by stringREF." << std::endl;
    std::cout << "First the address of the string variable : " << RED << &mainSTR << RESET << std::endl;
    std::cout << "First the address held by stringPTR : " << RED << stringPTR << RESET << std::endl;
    std::cout << "First the address held by stringREF : " << RED << &stringREF << RESET << std::endl;
    std::cout << "\n===========================================================" << std::endl;
    std::cout << "And then, Your program has to print:\n"
                 "• The value of the string variable.\n"
                 "• The value pointed to by stringPTR.\n"
                 "• The value pointed to by stringREF." << std::endl;
    std::cout << "Second the value of the string variable : " << RED << mainSTR << RESET << std::endl;
    std::cout << "Second the value pointed to by stringPTR : " << RED << *stringPTR << RESET << std::endl;
    std::cout << "Second the value pointed to by stringREF : " << RED << stringREF << RESET << std::endl;
}