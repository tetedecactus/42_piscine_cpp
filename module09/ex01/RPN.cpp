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
    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];
        double op2;
        double op1;
        
        
        if (isdigit(c)) {
            _operands.push(c - '0');
        } else if ((c == '+' || c == '-' || c == '*' || c == '/') && !_operands.empty()) {
            op2 = _operands.top();
            _operands.pop();
            op1 = _operands.top();
            _operands.pop();

            switch (c) {
                case '+':
                    std::cout << op1 << " + " << op2 << " = " << op1 + op2 << std::endl;
                    _operands.push(op1 + op2);
                    break;
                case '-':
                    std::cout << op1 << " - " << op2 << " = " << op1 - op2 << std::endl;
                    _operands.push(op1 - op2);
                    break;
                case '*':
                    std::cout << op1 << " * " << op2 << " = " << op1 * op2 << std::endl;
                    _operands.push(op1 * op2);
                    break;
                case '/':
                    std::cout << op1 << " / " << op2 << " = " << op1 / op2 << std::endl;
                    _operands.push(op1 / op2);
                    break;
            }
        }
        else if (c == ' ')
            continue;
        else
            throw std::runtime_error("Error: Invalid character");
    }

    setResult(_operands.top());
    return getResult();
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
    std::cout << "input  = " << input << std::endl;
    for (size_t i = 0; i < input.length(); i++) {
        
        char c = input[i];
        if (isdigit(c) && isdigit(input[i + 1]))
            throw std::runtime_error("Error: Invalid decimal number ( >= 10 )");
        else if (isdigit(c))
            count++;
        else if (c == '+' || c == '-' || c == '*' || c == '/')
            count--;
        else if (c == ' ')
            continue;
        else
            throw std::runtime_error("Error: Invalid character");
    }
    if (count > 2 || count < 0)
        throw std::runtime_error("Error: Invalid RPN euqation");
    return count == 1;
}
