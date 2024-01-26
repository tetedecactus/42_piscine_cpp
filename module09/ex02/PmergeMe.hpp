/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/26 16:05:56 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <algorithm>
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


template <typename It>
void print_array(It start, It end) {
    while (start != end) {
        std::cout << std::setw(3) << *start << ' ';
        ++start;
    }
    std::cout << '\n';
}

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

    // void merge_insert_sort_vector(std::vector<int> vec_to_sort);
    // void insertion(std::vector<int> &v);
    // void merge(std::vector<int> &v, int left, int middle, int right);
    // void sort(std::vector<int> &v, int left, int right);
    
    // // Ford-Johnson sort deque
    // void insertion(std::deque<int> &l);
    // void merge(std::deque<int> &l, int left, int middle, int right);
    // void sort(std::deque<int> &l, int left, int right);
    
    template<typename Container>
    void sort_pair(Container &container) {
        if (container.size() < 2)
            return;
        for (size_t i = 0; i < container.size() - 1; i += 2) {
            if (container[i] > container[i + 1])
                std::swap(container[i], container[i + 1]);
        }
    }

    template<typename Container>
    Container small_elements(Container &container) {
        Container small;

        if (is_vector<Container>::value)
            small.reserve(container.size() / 2);
        
        for (size_t i = 0; i < container.size(); i+= PAIR) {
            small.push_back(container[i]);
        }
        return small;
    }

    template<typename Container>
    Container large_elements(Container &container) {
        Container large;

        if (is_vector<Container>::value)
            large.reserve(container.size() / 2);
            
        
        for (size_t i = 1; i < container.size(); i+= PAIR) {
            large.push_back(container[i]);
        }
        return large;
    }

    template<typename Container>
    void merge(Container &container, int left, int middle, int right) {
        Container left_container;
        Container right_container;
        int i = 0;
        int j = 0;
        int k = left;
        int left_size = middle - left + 1;
        int right_size = right - middle;
        
        left_container = small_elements(container);
        right_container = large_elements(container);
        
        while (i < left_size && j < right_size) {
            if (left_container[i] <= right_container[j]) {
                container[k] = left_container[i];
                i++;
            }
            else {
                container[k] = right_container[j];
                j++;
            }
            k++;
        }
        while (i < left_size) {
            container[k] = left_container[i];
            i++;
            k++;
        }
        while (j < right_size) {
            container[k] = right_container[j];
            j++;
            k++;
        }
        // for loop to print the container
        for (size_t i = 0; i < container.size(); i++) {
            std::cout << container[i] << ' ';
        }
        std::cout << std::endl;
    }
    
    // recursive merge sort pairs
    template<typename Container>
    void merge_sort_recursive(Container &container, int left, int right) {
        if (left >= right)
            return;
        int middle = (left + right) / 2;
        merge_sort_recursive(container, left, middle);
        merge_sort_recursive(container, middle + 1, right);
        merge(container, left, middle, right);
    }
    
    template<typename Container>
    void merge_sort_pairs(Container &container) {
        // check if the input is odd or even number array
        const bool is_odd = container.size() % 2;
        // sort the pair
        merge_sort_recursive(container, 0, ((container.size() - 1) / PAIR - (is_odd ? 1 : 0)));
        
    }
    
    template<typename Container>
    void merge_insert_sort(Container &container) {
        if (container.size() < 2)
            return;
        sort_pair(container);
        
        merge_sort_pairs(container);
    }
    
    };

#endif


// https://en.wikipedia.org/wiki/Merge-insertion_sort
// https://www.youtube.com/watch?v=9pMqIA2ehtE
// https://www.youtube.com/watch?v=3j0SWDX4AtU
// https://iq.opengenus.org/merge-insertion-sort/
// https://www.codingninjas.com/studio/library/sorting-by-combining-insertion-sort-and-merge-sort-algorithms
// https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/