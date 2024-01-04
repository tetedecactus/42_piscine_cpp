/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/03 21:28:22 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(int argc, char const *argv[])
{
    if (!checkInput(argc))
        throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
    paseInput(argv);
    setVector(stockVectorInput(argv));
    setDeque(stockDequeInput(argv));
}
PmergeMe::PmergeMe(PmergeMe const & src)
{
    *this = src;
}

PmergeMe& PmergeMe::operator=(PmergeMe const & rhs)
{
    if (this != &rhs)
    {
        _v = rhs._v;
        _d = rhs._d;
        _input = rhs._input;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

//  getter and setter

void PmergeMe::setInput(std::string input) {
    _input = input;
}

std::string PmergeMe::getInput() const {
    return _input;
}

std::vector<int> PmergeMe::getVector() const {
    return _v;
}

std::deque<int> PmergeMe::getDeque() const {
    return _d;
}

void PmergeMe::setVector(std::vector<int> v) {
    _v = v;
}

void PmergeMe::setDeque(std::deque<int> l) {
    _d = l;
}

// Parse input

bool PmergeMe::checkInput(int argc) {
    if (argc < 2 || argc > 3001)
        return false;
    else
        return true;
}

void PmergeMe::paseInput(char const *argv[]) {
    argv++;
    int i = 0;
    while (argv[i]) {
        if (!std::isdigit(*argv[i])) {
            throw std::invalid_argument("Error: Invalid input, must only be positive numbers.");
        }
        i++;
    }
}

// Stock input into vector and deque

std::vector<int> PmergeMe::stockVectorInput(char const *argv[]) {
    std::vector<int> v;
    for (int i = 1; argv[i]; i++) {
        v.push_back(std::atoi(argv[i]));
    }
    return v;
}

std::deque<int> PmergeMe::stockDequeInput(char const *argv[]) {
    std::deque<int> l;
    for (int i = 1; argv[i]; i++) {
        l.push_back(std::atoi(argv[i]));
    }
    return l;
}

