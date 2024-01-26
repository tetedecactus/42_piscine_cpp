/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/26 15:12:28 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <deque>
#include <iterator>

int const MAX_INPUT = 3000;
int const MIN_INPUT = 1;
int const PAIR = 2;

#define ARRAY_SIZE (std::rand() % (3000 - 2 + 1) + 2)


template <typename Container>
struct is_vector {
    static const bool value = false;
};

template <typename T, typename Alloc>
struct is_vector<std::vector<T, Alloc> > {
    static const bool value = true;
};

template <typename Container>
struct is_deque {
    static const bool value = false;
};

template <typename T, typename Alloc>
struct is_deque<std::deque<T, Alloc> > {
    static const bool value = true;
};

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
    PmergeMe(char const *argv[]);
    PmergeMe(PmergeMe const & src);
    PmergeMe& operator=(PmergeMe const & rhs);
    ~PmergeMe();
    
    // Output
    void print_unsorted_input() const; // Print unsorted input
    void print_sorted_input() const; // Print sorted input
    void printTimeToSortVector() const; // Print time to sort vector
    void printTimeToSortDeque() const; // Print time to sort deque
    
    // Getter
    std::vector<int> get_vector() const;
    std::deque<int> get_deque() const;
    std::string get_input() const;
    std::string get_output() const;
    std::time_t get_vector_time_start() const;
    std::time_t get_vector_time_end() const;
    std::time_t get_deque_time_start() const;
    std::time_t get_deque_time_end() const;
    
    // Setter
    void set_vector(std::vector<int> v);
    void set_deque(std::deque<int> l);
    void set_input(std::string input);
    void set_output(std::string output);
    void set_vector_time_start(std::time_t v_time_start);
    void set_vector_time_end(std::time_t v_time_end);
    void set_deque_time_start(std::time_t d_time_start);
    void set_deque_time_end(std::time_t d_time_end);
    
    // Parse input
    std::string parse_input(char const *argv[]);
    
    // Stock input into vector
    std::vector<int> stock_vector_input(char const *argv[1]);
    
    // Stock input into deque
    std::deque<int> stock_deque_input(char const *argv[]);
    
    // Ford-Johnson sort 
    template<typename Container>
    static void sort_pair(Container &container);
    
    template<typename Container>
    static void merge_insert_sort(Container &container);

    template<typename Container>
    Container small_elements(Container &container);    

    template<typename Container>
    Container large_elements(Container &container);

    

    
    void merge_insert_sort_vector(std::vector<int> vec_to_sort);
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