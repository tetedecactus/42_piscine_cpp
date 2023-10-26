/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 12:07:01 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char const *argv[])
{
    if (argc != 2)
        throw std::runtime_error("Wrong number of arguments");
    if (!checkInput(argv[1]))
        throw std::runtime_error("Error: Invalid input");
    _input = argv[1];
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::setInput(std::string input) {
    _input = input;
}

std::string PmergeMe::getInput() const {
    return _input;
}

void PmergeMe::mergeMe(std::string input) {
    std::string result;
    std::string::iterator it = input.begin();
    std::string::iterator ite = input.end();
    std::string::iterator it2 = input.begin();
    std::string::iterator ite2 = input.end();
    std::string::iterator it3 = input.begin();
    std::string::iterator ite3 = input.end();
    std::string::iterator it4 = input.begin();
    std::string::iterator ite4 = input.end();
    std::string::iterator it5 = input.begin();
    std::string::iterator ite5 = input.end();
    std::string::iterator it6 = input.begin();
    std::string::iterator ite6 = input.end();
    std::string::iterator it7 = input.begin();
    std::string::iterator ite7 = input.end();
    std::string::iterator it8 = input.begin();
    std::string::iterator ite8 = input.end();
    std::string::iterator it9 = input.begin();
    std::string::iterator ite9 = input.end();
    std::string::iterator it10 = input.begin();
    std::string::iterator ite10 = input.end();
    std::string::iterator it11 = input.begin();
    std::string::iterator ite11 = input.end();
    std::string::iterator it12 = input.begin();
    std::string::iterator ite12 = input.end();
    std::string::iterator it13 = input.begin();
    std::string::iterator ite13 = input.end();
    std::string::iterator it14 = input.begin();

}

