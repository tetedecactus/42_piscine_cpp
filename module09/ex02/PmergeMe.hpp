/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/04 21:25:42 by olabrecq         ###   ########.fr       */
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
#include <cassert>
#include <cmath>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

int const MAX_ARRAY_SIZE = 3000;
int const PAIR = 2;

#define ARRAY_SIZE (std::rand() % (3000 - 2 + 1) + 2)


template <typename It>
void print_array(It start, It end) {
    while (start != end) {
        std::cout << std::setw(1) << *start << ' ';
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
    
    std::deque<int> _d;
    
    std::string _input;
    std::string _output;

    
public:
    
    PmergeMe(void);
    PmergeMe(char const *argv[]);
    PmergeMe(PmergeMe const & src);
    PmergeMe& operator=(PmergeMe const & rhs);
    ~PmergeMe();
    
    void print_unsorted_input() const; 
    void print_sorted_input() const; 
    
    std::vector<int> get_vector() const;
    std::deque<int> get_deque() const;
    std::string get_input() const;
    std::string get_output() const;
    
    void set_vector(std::vector<int> v);
    void set_deque(std::deque<int> l);
    void set_input(std::string input);
    void set_output(std::string output);
    
    std::string parse_input(char const *argv[]);
    
    std::vector<int> stock_vector_input(char const *argv[]);
    
    std::deque<int> stock_deque_input(char const *argv[]);



template <typename Container>
std::vector<int>& v_create_main_elements(Container &container)  {
    std::vector<int>& main = *new std::vector<int>();
    main.reserve(container.size() / PAIR);

    for (size_t i = 1; i < container.size(); i += PAIR) {
        main.push_back(container[i]);
    }
    return main;
}

template <typename Container>
std::vector<int>& v_create_pend_elements(Container &container)  {
    std::vector<int>& pend = *new std::vector<int>();
    pend.reserve(container.size() / PAIR);

    for (size_t i = 0; i < container.size(); i += PAIR) {
        pend.push_back(container[i]);
    }
    return pend;
}

template <typename Container>
std::deque<int>& d_create_main_elements(Container &container)  {
    std::deque<int>& main = *new std::deque<int>();

    for (size_t i = 1; i < container.size(); i += PAIR) {
        main.push_back(container[i]);
    }
    return main;
}

template <typename Container>
std::deque<int>& d_create_pend_elements(Container &container)  {
    std::deque<int>& pend = *new std::deque<int>();

    for (size_t i = 0; i < container.size(); i += PAIR) {
        pend.push_back(container[i]);
    }
    return pend;
}

template<typename Container>
/**
 * Sorts the elements in the given container in ascending order.
 * 
 * @param container The container to be sorted.
 */
void sort_pairs(Container &container) {
    if (container.size() < 2)
        return;
        
    for (typename Container::size_type i = 0; i < container.size() - 1; i += 2) {
        if (container[i] > container[i + 1])
            std::swap(container[i], container[i + 1]);
    }
}

template<typename Container>
/**
 * Merges the elements in the container between the indices left and right,
 * using the element at the index middle as the dividing point.
 *
 * @param container The container to be merged.
 * @param left The index of the leftmost element to be merged.
 * @param middle The index of the middle element to be used as the dividing point.
 * @param right The index of the rightmost element to be merged.
 */
void merge(Container &container, const typename Container::size_type left,
    const typename Container::size_type middle, const typename Container::size_type right) {

    const typename Container::size_type l = left * PAIR;
    const typename Container::size_type m = middle * PAIR;
    const typename Container::size_type r = right * PAIR;

    const typename Container::size_type left_length = m - l + PAIR;
    const typename Container::size_type right_length = r - m;

    assert(left_length <= MAX_ARRAY_SIZE / 2);
    assert(right_length <= MAX_ARRAY_SIZE / 2);

    Container tmp_left(container.begin() + l, container.begin() + l + left_length);
    Container tmp_right(container.begin() + m + PAIR, container.begin() + m + PAIR + right_length);

    typename Container::size_type i = 0;
    typename Container::size_type j = 0;

    for (typename Container::iterator k = container.begin() + l; k < container.begin() + r + 1; k += PAIR) {
        if (i < left_length && (j >= right_length || tmp_left[i + 1] < tmp_right[j + 1])) {
            *k = tmp_left[i];
            *(k + 1) = tmp_left[i + 1];
            i += PAIR;
        } else {
            *k = tmp_right[j];
            *(k + 1) = tmp_right[j + 1];
            j += PAIR;
        }
    }
}
    
template<typename Container>
/**
 * Recursively sorts the elements in the container using the merge sort algorithm.
 * 
 * @param container The container to be sorted.
 * @param left The left index of the range to be sorted.
 * @param right The right index of the range to be sorted.
 */
void merge_sort_recursive(Container &container, const typename Container::size_type left,
        const typename Container::size_type right) {
        
    if (left >= right)
        return;
        
    const typename Container::size_type middle = left + (right - left) / 2;

    merge_sort_recursive(container, left, middle);
    merge_sort_recursive(container, middle + 1, right);
    merge(container, left, middle, right);
}
    
template<typename Container>
/**
 * Sorts the elements in the container using the merge sort algorithm.
 * This function sorts the elements in pairs and then merges them together.
 *
 * @param container The container to be sorted.
 */
void merge_sort_pairs(Container &container) {
    // check if the input is odd or even number array
    const bool is_odd = container.size() % 2 != 0;
    merge_sort_recursive(container, 0, (container.size() - 1) / PAIR - (is_odd ? 1 : 0));
}
    
/**
 * Calculates the n-th Jacobsthal number.
 *
 * @param n The index of the Jacobsthal number to calculate.
 * @return The n-th Jacobsthal number.
 */
int jacobsthal(const int n) {
    return (std::pow(2, n + 1) + std::pow(-1, n)) / 3;
}
    
template<typename Container>
/**
 * Inserts a number into a container using binary search.
 * 
 * @param container The container to insert the number into.
 * @param start The starting index of the range to search in the container.
 * @param end The ending index of the range to search in the container.
 * @param number The number to be inserted.
 */
void binary_insert(Container &container, const typename Container::size_type start,
    const typename Container::size_type end, const int number) {
    if (start == end) {
        if (container[start] > number)
            container.insert(container.begin() + start, number);
        else
            container.insert(container.begin() + start + 1, number);
        return;
    }

    const typename Container::size_type middle = (start + end) / 2;
    if (container[middle] > number)
        return binary_insert(container, start, middle, number);
    else
        return binary_insert(container, middle + 1, end, number);
}

template<typename Container>
/**
 * Sorts the elements in the container using merge-insertion sort algorithm.
 * 
 * @param container The container to be sorted.
 */
Container f_sort(Container &c_main, Container &c_pend) {
    
    c_main.insert(c_main.begin(), c_pend.front());

    typename Container::size_type insertion_counter = 1; 
    typename Container::size_type i = 0;                
    typename Container::size_type jacobsthal_idx = 1;   
    while (true) {
        const int distance_forward = 2 * jacobsthal(jacobsthal_idx);
        if (i + distance_forward >= c_pend.size()) break;

        const typename Container::size_type start = i;
        i += distance_forward; 
        while (i > start) {
            binary_insert(c_main, 0, i + insertion_counter - 1, c_pend[i]);
            ++insertion_counter;
            --i;
        }
        i += distance_forward; 
        ++jacobsthal_idx;
    }

    const typename Container::size_type start = i;
    i = c_pend.size() - 1;
    while (i > start) {
        
        binary_insert(c_main, 0, c_main.size() - 1, c_pend[i]);
        --i;
    }
    Container container;
    container = c_main;
    return container;
}

template<typename Container>
void merge_insert_sort(Container &container, char type) {
    if (container.size() < 2)
        return ;
    sort_pairs(container);
    merge_sort_pairs(container);
    
    if (type == 'v') {
        std::vector<int> v_main = v_create_main_elements(container);
        std::vector<int> v_pend = v_create_pend_elements(container);
        std::vector<int> v_sorted = f_sort(v_main, v_pend);
        set_vector(v_sorted);
    }
    if (type == 'd') {
        std::deque<int> d_main = d_create_main_elements(container);
        std::deque<int> d_pend = d_create_pend_elements(container);
        std::deque<int> d_sorted = f_sort( d_main, d_pend);
        set_deque(d_sorted);
    }
}

};

#endif
