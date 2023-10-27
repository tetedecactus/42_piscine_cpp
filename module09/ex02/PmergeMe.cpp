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
    if (checkInput(argc, argv))
        throw std::invalid_argument("Invalid input");
    stockVectorInput(argv);
    stockListInput(argv);
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

bool PmergeMe::checkInput(int argc, char const *argv[]) {
    if (argc < 2 || argc > 3001)
        return false;
    else
        return true;
}

void PmergeMe::paseInput(char const *argv[]) {
    while (*argv) {
        if (isdigit(*argv))
            throw std::invalid_argument("Invalid input");
    }
}

std::vector<int> PmergeMe::stockVectorInput(char const *argv[]) {
    std::vector<int> v;
    for (int i = 1; argv[i]; i++) {
        v.push_back(std::stoi(argv[i]));
    }
    return v;
}

std::list<int> PmergeMe::stockListInput(char const *argv[]) {
    std::list<int> l;
    for (int i = 1; argv[i]; i++) {
        l.push_back(std::stoi(argv[i]));
    }
    return l;
}

void PmergeMe::vectorFordJohnsonSort(std::vector<int> &v) {
    int i = 0;
    int j = 0;
    int tmp = 0;

    while (i < v.size()) {
        j = i + 1;
        while (j < v.size()) {
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
    std::list<int> sortedList;
    for (std::list<int>::iterator it = sortedList.begin(); it != sortedList.end(); ++it) {
        const int& value = *it;
        std::list<int>::iterator insertPos = sortedList.begin();
        while (insertPos != sortedList.end() && *insertPos < value) {
            ++insertPos;
        }
        sortedList.insert(insertPos, value);
    }
    l = sortedList; 
}
