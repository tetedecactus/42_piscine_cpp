/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:39:12 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/26 16:27:24 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char const *argv[]) {

    {
        std::cout << "Constructors with no Args" << std::endl;
        // Constructors 1
            try 
        {
            RPN equation;
            equation.setInput(argv[1]);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    
    }
    std::cout << "-----------------------------------------" << std::endl;
    
    {
        std::cout << "Constructors with Args" << std::endl;
        // Constructors 2
        try
        {
            RPN equation(argc, argv);
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    
    }   
    std::cout << "-----------------------------------------" << std::endl;

    {
        std::cout << "Copy Constructor" << std::endl;
        // Constructors 3
        try
        {
            RPN src;
            RPN equation(src);
            equation.setInput(argv[1]);
            if (equation.checkInput(argv[1]) == false)
                throw std::runtime_error("Error: Invalid input");
            int result = equation.calculateRPN(argv[1]);
            std::cout << "Result: " << result << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
    std::cout << "-----------------------------------------" << std::endl;

    {
        std::cout << "Assignation Operator" << std::endl;
        // Operators equals
        try
        {
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
        }
    }
    return 0;
}
