/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:19 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 11:07:56 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(int argc, char const *argv[])
{
    if (argc != 2)
        throw std::runtime_error("Wrong number of arguments");
}

RPN::~RPN()
{
}

void RPN::setInput(std::string input) {
    _input = input;
}

void RPN::setResult(int result) {
    _result = result;
}

void RPN::setOperands(std::stack<double> operands) {
    _operands = operands;
}

std::string RPN::getInput() const {
    return _input;
}

int RPN::getResult() const {
    return _result;
}

std::stack<double> RPN::getOperands() const {
    return _operands;
}


double RPN::calculateRPN(const std::string& input) {
    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];
        
        
        if (isdigit(c)) {
            _operands.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            double op2 = _operands.top();
            _operands.pop();
            double op1 = _operands.top();
            _operands.pop();

            switch (c) {
                case '+':
                    _operands.push(op1 + op2);
                    break;
                case '-':
                    _operands.push(op1 - op2);
                    break;
                case '*':
                    _operands.push(op1 * op2);
                    break;
                case '/':
                    _operands.push(op1 / op2);
                    break;
            }
        }
        else
            throw std::runtime_error("Error: Invalid character");
    }

    return _operands.top();
}