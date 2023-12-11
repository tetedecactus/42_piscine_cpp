/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:19 by olabrecq          #+#    #+#             */
/*   Updated: 2023/12/10 20:16:46 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(int argc, char const *argv[])
{
    if (argc != 2)
        throw std::runtime_error("Wrong number of arguments");
    if (checkInput(argv[1]) == false)
        throw std::runtime_error("Error: Invalid input");
    _input = argv[1];
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
                    // std::cout << op1 << " + " << op2 << " = " << op1 + op2 << std::endl;
                    _operands.push(op1 + op2);
                    break;
                case '-':
                    // std::cout << op1 << " - " << op2 << " = " << op1 - op2 << std::endl;
                    _operands.push(op1 - op2);
                    break;
                case '*':
                    // std::cout << op1 << " * " << op2 << " = " << op1 * op2 << std::endl;
                    _operands.push(op1 * op2);
                    break;
                case '/':
                    // std::cout << op1 << " / " << op2 << " = " << op1 / op2 << std::endl;
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

bool RPN::checkInput(const std::string& input) {
    int count = 0;
    
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
            return false;
    }
    return true;
}