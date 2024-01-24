/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/18 20:14:08 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <deque>

class PmergeMe
{
private:
    
    std::vector<int> _v;
    std::time_t _v_time_start;
    std::time_t _v_time_end;
    
    std::deque<int> _d;
    std::time_t _d_time_start;
    std::time_t _d_time_end;
    
    std::string _input; // Argument -> Digit(s) to sort
    std::string _output; // Sorted digit(s)
    
public:
    
    PmergeMe(void);
    PmergeMe(int argc, char const *argv[]);
    PmergeMe(PmergeMe const & src);
    PmergeMe& operator=(PmergeMe const & rhs);
    ~PmergeMe();
    
    // Output
    void printUnsortedInput() const; // Print unsorted input
    void printSortedInput() const; // Print sorted input
    void printTimeToSortVector() const; // Print time to sort vector
    void printTimeToSortDeque() const; // Print time to sort deque
    
    // Getter
    std::vector<int> getVector() const;
    std::deque<int> getDeque() const;
    std::string getInput() const;
    std::string getOutput() const;
    std::time_t getVectorTimeStart() const;
    std::time_t getVectorTimeEnd() const;
    std::time_t getDequeTimeStart() const;
    std::time_t getDequeTimeEnd() const;
    
    // Setter
    void setVector(std::vector<int> v);
    void setDeque(std::deque<int> l);
    void setInput(std::string input);
    void setOutput(std::string output);
    void setVectorTimeStart(std::time_t v_time_start);
    void setVectorTimeEnd(std::time_t v_time_end);
    void setDequeTimeStart(std::time_t d_time_start);
    void setDequeTimeEnd(std::time_t d_time_end);
    
    // Parse input
    bool checkInput(int argc);
    void paseInput(char const *argv[]);
    
    // Stock input into vector
    std::vector<int> stockVectorInput(char const *argv[]);
    
    // Stock input into deque
    std::deque<int> stockDequeInput(char const *argv[]);
    
    // Ford-Johnson sort vector
    void insertion(std::vector<int> &v);
    void merge(std::vector<int> &v, int left, int middle, int right);
    void sort(std::vector<int> &v, int left, int right);
    
    // Ford-Johnson sort deque
    void insertion(std::deque<int> &l);
    void merge(std::deque<int> &l, int left, int middle, int right);
    void sort(std::deque<int> &l, int left, int right);
   
};


// https://en.wikipedia.org/wiki/Merge-insertion_sort
// https://www.youtube.com/watch?v=9pMqIA2ehtE
// https://www.youtube.com/watch?v=3j0SWDX4AtU
// https://iq.opengenus.org/merge-insertion-sort/
// https://www.codingninjas.com/studio/library/sorting-by-combining-insertion-sort-and-merge-sort-algorithms
// https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/