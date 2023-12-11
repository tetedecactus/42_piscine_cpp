/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2023/12/10 20:15:21 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <list>

class PmergeMe
{
private:
    
    std::vector<int> _v;
    std::list<int> _l;
    
    std::string _input; 
    
public:

    PmergeMe(int argc, char const *argv[]);
    ~PmergeMe();
    PmergeMe(PmergeMe const & src);
    PmergeMe& operator=(PmergeMe const & rhs);
    
    // Getter
    std::vector<int> getVector() const;
    std::list<int> getList() const;
    std::string getInput() const;
    
    // Setter
    void setVector(std::vector<int> v);
    void setList(std::list<int> l);
    void setInput(std::string input);
    
    // Parse input
    bool checkInput(int argc);
    void paseInput(char const *argv[]);
    
    // Stock input into vector
    std::vector<int> stockVectorInput(char const *argv[]);
    
    // Stock input into list
    std::list<int> stockListInput(char const *argv[]);
    
    // Ford-Johnson sort vector
    void insertion(std::vector<int> &v);
    void merge(std::vector<int> &v, int left, int middle, int right);
    void sort(std::vector<int> &v, int left, int right);
    
    // Ford-Johnson sort list
    void insertion(std::list<int> &l);
    void merge(std::list<int> &l, int left, int middle, int right);
    void sort(std::list<int> &l, int left, int right);
   
};


// https://en.wikipedia.org/wiki/Merge-insertion_sort
// https://www.youtube.com/watch?v=9pMqIA2ehtE
// https://www.youtube.com/watch?v=3j0SWDX4AtU
// https://iq.opengenus.org/merge-insertion-sort/
// https://www.codingninjas.com/studio/library/sorting-by-combining-insertion-sort-and-merge-sort-algorithms
// https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/