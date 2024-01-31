/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/31 16:23:59 by olabrecq         ###   ########.fr       */
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
    std::vector<int> stock_vector_input(char const *argv[]);
    
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
    










template <typename Container>
std::vector<int>& v_create_main_elements(Container &container)  {
    std::vector<int>& main = *new std::vector<int>();
    main.reserve(container.size() / PAIR);

    for (size_t i = 0; i < container.size(); i += PAIR) {
        main.push_back(container[i]);
    }
    return main;
}

template <typename Container>
std::vector<int>& v_create_pend_elements(Container &container)  {
    std::vector<int>& pend = *new std::vector<int>();
    pend.reserve(container.size() / PAIR);

    for (size_t i = 1; i < container.size(); i += PAIR) {
        pend.push_back(container[i]);
    }
    return pend;
}


template <typename Container>
std::deque<int>& d_create_main_elements(Container &container)  {
    std::deque<int>& main = *new std::deque<int>();
    main.resize(container.size() / PAIR);

    for (size_t i = 0; i < container.size(); i += PAIR) {
        main.push_back(container[i]);
    }
    return main;
}


template <typename Container>
std::deque<int>& d_create_pend_elements(Container &container)  {
    std::deque<int>& pend = *new std::deque<int>();
    pend.resize(container.size() / PAIR);

    for (size_t i = 1; i < container.size(); i += PAIR) {
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



template <typename T, typename Alloc>
void conditional_reserve(std::vector<T, Alloc>& vec) {
    vec.reserve(vec.size() / PAIR);
    std::cout << "Reserved space for vector.\n";
}




template<typename Container>
/**
 * @brief Extracts and returns a container containing the small elements from the given container.
 * 
 * @param container The container from which to extract the small elements.
 * @return Container The container containing the small elements.
 */ 
Container create_main_container_elements(Container &container, char type) {
    Container main;

    if (type == 'v') {
        std::vector<int> vec;
        conditional_reserve(vec);
    }    
    
    for (size_t i = 0; i < container.size(); i+= PAIR) {
        main.push_back(container[i]);
    }    
    return main;
}    



template<typename Container>
/**
 * @brief Extracts and returns the large elements from the given container.
 * 
 * @param container The container from which to extract the large elements.
 * @return Container The container containing the large elements.
 */
Container create_pend_container_elements(const Container& container, char type) {
    Container pend;

    const size_t PAIR = 2;

    if (type == 'v') {
        std::vector<int> vec;
        conditional_reserve(vec);
    }

    for (size_t i = 1; i < container.size(); i += PAIR) {
        pend.push_back(container[i]);
    }

    return pend;
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

    std::cout << "l: " << l << std::endl;
    std::cout << "m: " << m << std::endl;
    std::cout << "r: " << r << std::endl;
    
    const typename Container::size_type left_length = m - l + PAIR;
    const typename Container::size_type right_length = r - m;

    std::cout << "left_length: " << left_length << std::endl;
    std::cout << "right_length: " << right_length << std::endl;
    assert(left_length <= MAX_ARRAY_SIZE / 2);
    assert(right_length <= MAX_ARRAY_SIZE / 2);

    Container tmp_left(container.begin() + l, container.begin() + l + left_length);
    Container tmp_right(container.begin() + m + PAIR, container.begin() + m + PAIR + right_length);

    typename Container::size_type i = 0;
    typename Container::size_type j = 0;

    for (typename Container::iterator k = container.begin() + l; k < container.begin() + r + 1; k += PAIR) {
        if (i < left_length && (j >= right_length || tmp_left[i + 1] < tmp_right[j + 1])) {
            // copy pair from left
            *k = tmp_left[i];
            *(k + 1) = tmp_left[i + 1];
            i += PAIR;
        } else {
            // copy pair from right
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
    
    
    std::cout << GREEN << "Afther Recursive Merge Sort 1 : " << RED << std::endl;
    print_array(container.begin(), container.end());
    std::cout << RESET << std::endl;
    
    merge_sort_recursive(container, middle + 1, right);

    
    std::cout << GREEN << "Afther Recursive Merge Sort 2 : " << RED << std::endl;
    print_array(container.begin(), container.end());
    std::cout << RESET << std::endl;
    
    merge(container, left, middle, right);

    
    std::cout << GREEN << "Afther Merge : " << RED << std::endl;
    print_array(container.begin(), container.end());
    std::cout << RESET << std::endl;
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
    // sort the pair
    merge_sort_recursive(container, 0, (container.size() - 1) / PAIR - (is_odd ? 1 : 0));
}
    



// /**
//  * Calculates the n-th Jacobsthal number.
//  *
//  * @param n The index of the Jacobsthal number to calculate.
//  * @return The n-th Jacobsthal number.
//  */
// int jacobsthal(const int n) {
//     return (std::pow(2, n + 1) + std::pow(-1, n)) / 3;
// }
    



// template<typename Container>
// /**
//  * Inserts a number into a container using binary search.
//  * 
//  * @param container The container to insert the number into.
//  * @param start The starting index of the range to search in the container.
//  * @param end The ending index of the range to search in the container.
//  * @param number The number to be inserted.
//  */
// void binary_insert(Container &container, const typename Container::size_type start,
//     const typename Container::size_type end, const int number) {
//     if (start == end) {
//         if (container[start] > number)
//             container.insert(container.begin() + start, number);
//         else
//             container.insert(container.begin() + start + 1, number);
//         return;
//     }

//     const typename Container::size_type middle = (start + end) / 2;
//     if (container[middle] > number)
//         return binary_insert(container, start, middle, number);
//     else
//         return binary_insert(container, middle + 1, end, number);
// }

    



// template<typename Container>
// /**
//  * Sorts the elements in the container using merge-insertion sort algorithm.
//  * 
//  * @param container The container to be sorted.
//  */
// void merge_insert_sort(Container &container) {
//     if (container.size() < 2)
//         return;
//     sort_pair(container);
//     merge_sort_pairs(container);
    
//     Container small = small_elements(container);
//     Container large = large_elements(container);
    
//     small.insert(small.begin(), large.front());

//     typename Container::size_type insertion_counter = 1; // how many pend elements have been inserted (for right offset during binary inserts)
//     typename Container::size_type i = 0;                 // index in pend
//     typename Container::size_type jacobsthal_idx = 1;    // current jacobsthal number
//     while (true) {
//         const int distance_forward = 2 * jacobsthal(jacobsthal_idx);
//         if (i + distance_forward >= large.size()) break; // break if move forward is out of bounds

//         const typename Container::size_type start = i;
//         i += distance_forward; // move forward
//         // iterate backwards until we reach start
//         while (i > start) {
//             binary_insert(small, 0, i + insertion_counter - 1, large[i]);
//             ++insertion_counter;
//             --i;
//         }
//         i += distance_forward; // move back to i's starting point for the next iteration
//         ++jacobsthal_idx;
//     }

//     // insert rest of pend if any
//     const typename Container::size_type start = i;
//     i = large.size() - 1;
//     while (i > start) {
//         // binary insert into the complete main chain's range (no slicing)
//         binary_insert(small, 0, small.size() - 1, large[i]);
//         --i;
//     }

//     container = small;
// }

// creer une main et une pend pour le vector et pour le deque
template<typename Container>
void merge_insert_sort(Container &container, char type) {
    if (container.size() < 2)
        return ;
    // 
    sort_pairs(container);
    
    std::cout << GREEN << "Afther Sorting Pairs -> must be : \n 10 23 10 97 32 42 40 84 26 29 66 96 13 57 30 46 48 91 11" << RED <<std::endl;
    print_array(container.begin(), container.end());
    std::cout << RESET << std::endl;

    // 
    merge_sort_pairs(container);
    
    (void)type;
    std::cout << GREEN << "Afther Merge Sort Pairs -> must be : \n 10 23 10 97 32 42 40 84 26 29 66 96 13 57 30 46 48 91 11" << RED <<std::endl;
    print_array(container.begin(), container.end());
    std::cout << RESET << std::endl;
    
    // // 
    // if (type == 'v') {
    //     std::vector<int> v_main = v_create_main_elements(container);

    //     std::cout << "Afther Merge sort Pairs V MAIN CHAIN -> must be : \n 23 29 42 46 57 84 91 96 97" <<std::endl;
    //     print_array(v_main.begin(), v_main.end());
    //     std::cout << std::endl;
        
    //     std::vector<int> v_pend = v_create_pend_elements(container);
    //     std::cout << "Afther Merge sort Pairs PEND CHAIN -> must be : \n 10 26 32 30 13 40 48 66 10 11" <<std::endl;
    //     print_array(v_pend.begin(), v_pend.end());
    //     std::cout << std::endl;
        
    // }
    // if (type == 'd') {
    //     std::deque<int> d_main = d_create_main_elements(container);
    //     std::cout << "Afther Merge sort Pairs D MAIN CHAIN -> must be : \n 23 29 42 46 57 84 91 96 97" <<std::endl;
    //     print_array(d_main.begin(), d_main.end());
    //     std::cout << std::endl;
        
    //     std::deque<int> d_pend = d_create_pend_elements(container);
    //     std::cout << "Afther Merge sort Pairs MAIN CHAIN -> must be : \n 10 26 32 30 13 40 48 66 10 11" <<std::endl;
    //     print_array(d_pend.begin(), d_pend.end());
    //     std::cout << std::endl;
    // }
    
   
}

};


    
#endif


// https://en.wikipedia.org/wiki/Merge-insertion_sort
// https://www.youtube.com/watch?v=9pMqIA2ehtE
// https://www.youtube.com/watch?v=3j0SWDX4AtU
// https://iq.opengenus.org/merge-insertion-sort/
// https://www.codingninjas.com/studio/library/sorting-by-combining-insertion-sort-and-merge-sort-algorithms
// https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/