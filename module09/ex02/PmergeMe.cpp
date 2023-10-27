/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 22:04:17 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char const *argv[])
{
    if (!checkInput(argc))
        throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
    paseInput(argv);
    setVector(stockVectorInput(argv));
    setList(stockListInput(argv));
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

std::vector<int> PmergeMe::stockVectorInput(char const *argv[]) {
    std::vector<int> v;
    for (int i = 1; argv[i]; i++) {
        v.push_back(std::atoi(argv[i]));
    }
    return v;
}

std::list<int> PmergeMe::stockListInput(char const *argv[]) {
    std::list<int> l;
    for (int i = 1; argv[i]; i++) {
        l.push_back(std::atoi(argv[i]));
    }
    return l;
}

void PmergeMe::vectorFordJohnsonSort(std::vector<int> &v) {
    int i = 0;
    int j = 0;
    int tmp = 0;

    while (i < static_cast<int>(v.size())) {
        j = i + 1;
        while (j < static_cast<int>(v.size())) {
            if (v[i] > v[j]) {
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

void PmergeMe::listFordJohnsonSort(std::list<int> &l) {
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        const int& value = *it;
        std::list<int>::iterator insertPos = l.begin();
        while (insertPos != l.end() && *insertPos < value) {
            ++insertPos;
        }
        l.insert(insertPos, value);
    }
}


std::vector<int> PmergeMe::getVector() const {
    return _v;
}

std::list<int> PmergeMe::getList() const {
    return _l;
}

void PmergeMe::setVector(std::vector<int> v) {
    _v = v;
}

void PmergeMe::setList(std::list<int> l) {
    _l = l;
}
