/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:19 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/23 11:09:37 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN(const char* arg)
{
    _input = arg;
}

RPN::RPN(RPN const & src)
{
    *this = src;
}

RPN& RPN::operator=(RPN const & rhs)
{
    if (this != &rhs)
    {
        _result = rhs._result;
        _input = rhs._input;
        _operands = rhs._operands;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::setInput(std::string input) {
    _input = input;
}

void RPN::setResult(double result) {
    _result = result;
}

void RPN::setOperands(std::stack<double> operands) {
    _operands = operands;
}

std::string RPN::getInput() const {
    return _input;
}

double RPN::getResult() const {
    return _result;
}

std::stack<double> RPN::getOperands() const {
    return _operands;
}


double RPN::calculateRPN(const std::string& input) {
    std::stack<double> p;
    double n1, n2;
    std::string values[input.size()];

    for (size_t i = 0; i < input.size(); i++)
    {
        if (isOperator(input.at(i))) {
            if(p.size() < 2) {
                throw std::invalid_argument("Invalid RPN expression: not enough operands.");
            }
            n1 = p.top(); p.pop();
            n2 = p.top(); p.pop();
            switch (input.at(i)){
                case '+': p.push(n1 + n2); break;
                case '-': p.push(n2 - n1); break;
                case '*': p.push(n1 * n2); break;
                case '/':
                    if (n1 == 0) {
                        throw std::invalid_argument("Invalid RPN expression: division by zero.");
                    }
                    p.push(n2 / n1); break;
            }
        } else if(isdigit(input.at(i))) {
            p.push(input.at(i) - '0');
        }
    }
    if(p.size() != 1) {
        throw std::invalid_argument("Invalid RPN expression: too many operands");
    }
    return p.top();
}

inline bool RPN::isDigit(char c) {
    return std::isdigit(c);
}

inline bool RPN::isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to parse a double from a string
double RPN::parseDouble(const std::string& str) {
    double value;
    std::istringstream ss(str);
    if (!(ss >> value)) {
        throw std::runtime_error("Error: Invalid decimal number");
    }
    return value;
}


bool RPN::checkInput(const std::string& input) {
    int count = 0;

    for (size_t i = 0; i < input.size(); i++) {
        
        char c = input[i];
        if (isdigit(c) && isdigit(input[i + 1]))
            throw std::invalid_argument("Invalid number: numbers should be less than 10");
        else if (isdigit(c))
            count++;
        else if (c == '+' || c == '-' || c == '*' || c == '/')
            count--;
        else if (c == ' ')
            continue;
        else
            throw std::runtime_error("Error: Invalid character");
    }
    
    return true;
}
