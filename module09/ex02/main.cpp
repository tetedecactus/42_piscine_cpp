/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/29 22:17:39 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        if (argc < 2 || argc > 3001)
            throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
        PmergeMe p;
        p.set_input(p.parse_input(argv));
        
        std::cout << "Input: " << p.get_input() << std::endl;
        
        p.set_vector(p.stock_vector_input(argv));
        p.set_deque(p.stock_deque_input(argv));
        std::vector<int> v_array = p.get_vector();
        std::deque<int> d_array = p.get_deque();
        
        std::cout << "Before Vector: ";
        print_array(v_array.begin(), v_array.end());
        std::cout << std::endl;
        std::cout << "Before Deque: ";
        print_array(d_array.begin(), d_array.end());
        std::cout << std::endl;

        p.print_unsorted_input();
        
        std::cout << "---------------VECTOR-----------------" <<std::endl;
        p.merge_insert_sort(v_array, 'v');
        
        std::cout << "---------------DEQUE-----------------" <<std::endl;
        p.merge_insert_sort(d_array, 'd');
        

        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
