/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:39:12 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/23 10:57:24 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char const *argv[]) {

    {
        std::cout << "Constructors by default" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        
        // Constructors 1
            try 
        {
            if (argc != 2)
                throw std::runtime_error("Wrong number of arguments");
            RPN equation;
            equation.parseInpute(argv[1]);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            equation.setInput(argv[1]);
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Program must be ./RPN \"[equation]\" "  << std::endl;
        }
    
    }
    std::cout << "-----------------------------------------" << std::endl;
    
    {
        std::cout << "Constructors with Args" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        
        // Constructors 2
        try
        {
            if (argc != 2)
                throw std::runtime_error("Wrong number of arguments");
            RPN equation(argv[1]);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Program must be ./RPN \"[equation]\" "  << std::endl;
        }
    
    }   
    std::cout << "-----------------------------------------" << std::endl;

    {
        std::cout << "Copy Constructor" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;

        // Constructors 3
        try
        {
            if (argc != 2)
                throw std::runtime_error("Wrong number of arguments");
            RPN src;
            RPN equation(src);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            equation.setInput(argv[1]);
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Program must be ./RPN \"[equation]\" "  << std::endl;
        }
    }
    
    std::cout << "-----------------------------------------" << std::endl;

    {
        std::cout << "Assignation Operator" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;

        // Operators equals
        try
        {
            if (argc != 2)
                throw std::runtime_error("Wrong number of arguments");
            RPN equation;
            equation.setInput(argv[1]);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            RPN equation2;
            equation2 = equation;
            int result = equation2.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Program must be ./RPN \"[equation]\" "  << std::endl;
        }
    }
    return 0;
}
