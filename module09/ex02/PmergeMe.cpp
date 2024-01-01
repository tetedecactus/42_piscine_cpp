/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:35 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/01 17:37:01 by olabrecq         ###   ########.fr       */
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
    setList(stockListInput(argv));
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
        _l = rhs._l;
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

std::list<int> PmergeMe::getList() const {
    return _l;
}

void PmergeMe::setVector(std::vector<int> v) {
    _v = v;
}

void PmergeMe::setList(std::list<int> l) {
    _l = l;
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

// Stock input into vector and list

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


// Ford-Johnson sort vector 
void PmergeMe::insertion(std::vector<int> &v) {
    int i, j, key;
    for (i = 1; i < v.size(); i++) {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

void PmergeMe::merge(std::vector<int> &v, int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;
    
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (j = 0; j < n2; j++)
        R[j] = v[middle + 1 + j];
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sort(std::vector<int> &v, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        
        sort(v, left, middle);
        sort(v, middle + 1, right);
        
        merge(v, left, middle, right);
    }
}

// Ford-Johnson sort list

void PmergeMe::insertion(std::list<int> &l) {
    std::list<int>::iterator it = l.begin();
    std::list<int>::iterator it2 = l.begin();
    it2++;
    while (it2 != l.end()) {
        if (*it2 < *it) {
            l.splice(it, l, it2);
            it = l.begin();
            it2 = l.begin();
            it2++;
        }
        else {
            it++;
            it2++;
        }
    }
}

void PmergeMe::merge(std::list<int> &l, int left, int middle, int right) {
    std::list<int>::iterator itLeft = l.begin();
    std::advance(itLeft, left);

    std::list<int>::iterator itMiddle = l.begin();
    std::advance(itMiddle, middle + 1);

    std::list<int> leftList(itLeft, itMiddle);
    std::list<int> rightList(itMiddle, l.end());

    std::list<int>::iterator itLeftList = leftList.begin();
    std::list<int>::iterator itRightList = rightList.begin();

    std::list<int>::iterator it = l.begin();
    std::advance(it, left);

    while (itLeftList != leftList.end() && itRightList != rightList.end()) {
        if (*itLeftList <= *itRightList) {
            *it = *itLeftList;
            ++itLeftList;
        } else {
            *it = *itRightList;
            ++itRightList;
        }
        ++it;
    }

    // Copy remaining elements from leftList
    while (itLeftList != leftList.end()) {
        *it = *itLeftList;
        ++it;
        ++itLeftList;
    }

    // Copy remaining elements from rightList
    while (itRightList != rightList.end()) {
        *it = *itRightList;
        ++it;
        ++itRightList;
    }
}

void PmergeMe::sort(std::list<int> &l, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        
        sort(l, left, middle);
        sort(l, middle + 1, right);
        
        merge(l, left, middle, right);
    }
}