/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:47 by olabrecq          #+#    #+#             */
/*   Updated: 2023/12/10 20:15:34 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <stack>
#include <string>
#include <stdexcept>

class RPN
{
private:
    
    double _result;
    std::string _input;
    
    std::stack<double> _operands;
    
public:

    RPN(int argc, char const *argv[]);
    RPN(RPN const & src);
    RPN& operator=(RPN const & rhs);
    ~RPN();
    
    
    double calculateRPN(const std::string& input);
    bool checkInput(const std::string& input);
    
    void setOperands(std::stack<double> operands);
    void setResult(double result);
    void setInput(std::string input);

    double getResult() const;
    std::string getInput() const;
    std::stack<double> getOperands() const;

};

// https://en.wikipedia.org/wiki/Reverse_Polish_notation
// https://www.youtube.com/watch?v=qN8LPIcY6K4&t=304s