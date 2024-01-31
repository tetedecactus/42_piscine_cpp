/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/30 10:17:05 by olabrecq         ###   ########.fr       */
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

std::string PmergeMe::get_input() const {
    return _input;
}

std::vector<int> PmergeMe::get_vector() const {
    return _v;
}

std::deque<int> PmergeMe::get_deque() const {
    return _d;
}

std::time_t PmergeMe::get_vector_time_start() const {
    return _v_time_start;
}

std::time_t PmergeMe::get_vector_time_end() const {
    return _v_time_end;
}

std::time_t PmergeMe::get_deque_time_start() const {
    return _d_time_start;
}

std::time_t PmergeMe::get_deque_time_end() const {
    return _d_time_end;
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

void PmergeMe::set_vector_time_start(std::time_t v_time_start) {
    _v_time_start = v_time_start;
}

void PmergeMe::set_vector_time_end(std::time_t v_time_end) {
    _v_time_end = v_time_end;
}

void PmergeMe::set_deque_time_start(std::time_t d_time_start) {
    _d_time_start = d_time_start;
}

void PmergeMe::set_deque_time_end(std::time_t d_time_end) {
    _d_time_end = d_time_end;
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

// Ford-johnson algorithm Vector

// std::vector<int> PmergeMe::v_create_main_elements(std::vector<int> &v) {
//     std::vector<int> v_main_container_elements; 
//     v_main_container_elements.reserve(v.size() / PAIR);
    
//     for (size_t i = 0; i < v.size(); i += PAIR) {
//         v_main_container_elements.push_back(v[i]);
//     }
//     return v_main_container_elements;
// }


// std::vector<int> PmergeMe::v_create_pend_elements(std::vector<int> &v) {
//     std::vector<int> v_pend_container_elements;
//     v_pend_container_elements.reserve(v.size() / PAIR);
    
//     for (size_t i = 1; i < v.size(); i += PAIR) {
//         v_pend_container_elements.push_back(v[i]);
//     }
//     return v_pend_container_elements;
// }


// // Ford-johnson algorithm Deque

// std::deque<int> PmergeMe::d_create_main_elements(std::deque<int> &d) {
//     std::deque<int>& d_main_container_elements = *new std::deque<int>;
//     d_main_container_elements.resize(d.size() / PAIR) ;
    
//     for (size_t i = 0; i < d.size(); i += PAIR) {
//         d_main_container_elements.push_back(d[i]);
//     }
//     return d_main_container_elements;
// }

// std::deque<int> PmergeMe::d_create_pend_elements(std::deque<int> &d) {
//     std::deque<int>& d_pend_container_elements = *new std::deque<int>;
//     d_pend_container_elements.resize(d.size() / PAIR);
    
//     for (size_t i = 1; i < d.size(); i += PAIR) {
//         d_pend_container_elements.push_back(d[i]);
//     }
//     return d_pend_container_elements;
// }