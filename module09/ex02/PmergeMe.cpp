/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/04 21:27:52 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor, Destructor, Copy Constructor, Assignation Operator

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(char const *argv[])
{
    set_input(parse_input(argv));
    set_deque(stock_deque_input(argv));
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

void PmergeMe::print_unsorted_input() const {
    std::cout << "Before: " << get_input() << std::endl;
}

void PmergeMe::print_sorted_input() const {
    std::cout << "Afther: ";
    
    for (std::vector<int>::const_iterator i = _v.begin(); i != _v.end(); ++i)
        std::cout << *i << ' ';
    std::cout << std::endl;
    // for (std::deque<int>::const_iterator i = _d.begin(); i != _d.end(); ++i)
    //     std::cout << *i << ' ';
    // std::cout << std::endl;
}


// -------------------------------------------------------------------------- //

// Getter

std::string PmergeMe::get_input() const {
    return _input;
}

std::vector<int> PmergeMe::get_vector() const {
    return _v;
}

std::deque<int> PmergeMe::get_deque() const {
    return _d;
}

// -------------------------------------------------------------------------- //

// Setter

void PmergeMe::set_input(std::string input) {
    _input = input;
}

void PmergeMe::set_output(std::string output) {
    _output = output;
}

void PmergeMe::set_vector(std::vector<int> v) {
    _v = v;
}

void PmergeMe::set_deque(std::deque<int> l) {
    _d = l;
}

// -------------------------------------------------------------------------- //

// Parse input

std::string PmergeMe::parse_input(char const *argv[]) {
    std::string input;
    for (size_t i = 1; argv[i]; ++i) {
        for (size_t j = 0; argv[i][j]; ++j)
        {
            if (!std::isdigit(argv[i][j])) {
                throw std::invalid_argument("Error: Invalid input, must only be positive numbers.");
            }
            input.append(1, argv[i][j]);
        }
        input.append(1, ' ');
    }
    return input;
}

// Stock input into vector and deque

std::vector<int> PmergeMe::stock_vector_input(char const *argv[]) {
    std::vector<int> v;
    for (size_t i = 1; argv[i]; ++i) {
        v.push_back(std::atoi(argv[i]));
    }
    return v;
}

std::deque<int> PmergeMe::stock_deque_input(char const *argv[]) {
    std::deque<int> d;
    for (int i = 1; argv[i]; i++) {
        d.push_back(std::atoi(argv[i]));
    }
    return d;
}
