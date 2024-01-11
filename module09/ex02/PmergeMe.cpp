/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/11 13:54:48 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor, Destructor, Copy Constructor, Assignation Operator

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
// -------------------------------------------------------------------------- //

// Output

void PmergeMe::printUnsortedInput() const {
    std::cout << "Unsorted input: " << getInput() << std::endl;
}

void PmergeMe::printSortedInput() const {
    std::cout << "Sorted input: " << std::endl;
    std::cout << "Vector: ";
    for (std::vector<int>::const_iterator i = _v.begin(); i != _v.end(); ++i)
        std::cout << *i << ' ';
    std::cout << std::endl;
    std::cout << "Deque: ";
    for (std::deque<int>::const_iterator i = _d.begin(); i != _d.end(); ++i)
        std::cout << *i << ' ';
    std::cout << std::endl;
}

void PmergeMe::printTimeToSortVector() const {
    std::cout << "Time to sort vector: " << std::endl;
}

void PmergeMe::printTimeToSortDeque() const {
    std::cout << "Time to sort deque: " << std::endl;
}

// -------------------------------------------------------------------------- //

// Getter

std::string PmergeMe::getInput() const {
    return _input;
}

std::vector<int> PmergeMe::getVector() const {
    return _v;
}

std::deque<int> PmergeMe::getDeque() const {
    return _d;
}

std::time_t PmergeMe::getVectorTimeStart() const {
    return _v_time_start;
}

std::time_t PmergeMe::getVectorTimeEnd() const {
    return _v_time_end;
}

std::time_t PmergeMe::getDequeTimeStart() const {
    return _d_time_start;
}

std::time_t PmergeMe::getDequeTimeEnd() const {
    return _d_time_end;
}

// -------------------------------------------------------------------------- //

// Setter

void PmergeMe::setInput(std::string input) {
    _input = input;
}


void PmergeMe::setVector(std::vector<int> v) {
    _v = v;
}

void PmergeMe::setDeque(std::deque<int> l) {
    _d = l;
}

void PmergeMe::setVectorTimeStart(std::time_t v_time_start) {
    _v_time_start = v_time_start;
}

void PmergeMe::setVectorTimeEnd(std::time_t v_time_end) {
    _v_time_end = v_time_end;
}

void PmergeMe::setDequeTimeStart(std::time_t d_time_start) {
    _d_time_start = d_time_start;
}

void PmergeMe::setDequeTimeEnd(std::time_t d_time_end) {
    _d_time_end = d_time_end;
}

// -------------------------------------------------------------------------- //

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

