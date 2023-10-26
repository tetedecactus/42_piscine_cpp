/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:47 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 11:06:51 by olabrecq         ###   ########.fr       */
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
    
    int _result;
    std::string _input;
    
    std::stack<double> _operands;
    
public:

    RPN(int argc, char const *argv[]);
    ~RPN();
    
    
    double calculateRPN(const std::string& input);
    
    void setOperands(std::stack<double> operands);
    void setResult(int result);
    void setInput(std::string input);

    int getResult() const;
    std::string getInput() const;
    std::stack<double> getOperands() const;

};

