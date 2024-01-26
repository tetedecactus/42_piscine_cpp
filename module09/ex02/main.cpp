/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2024/01/26 11:48:57 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename It> void print_array(It start, It end) {
    while (start != end) {
        std::cout << std::setw(3) << *start << ' ';
        ++start;
    }
    std::cout << '\n';
}

int main(int argc, char const *argv[])
{
    try
    {
        if (argc < 2 || argc > 3001)
            throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
        PmergeMe p;
        p.set_input(p.parse_input(argv));
        p.set_vector(p.stock_vector_input(argv));
        p.set_deque(p.stock_deque_input(argv));
        std::vector<int> v_num = p.get_vector();
        std::deque<int> d_num = p.get_deque();
        
        std::cout << "Before Vector: ";
        print_array(v_num.begin(), v_num.end());
        std::cout << std::endl;
        std::cout << "Before Deque: ";
        print_array(d_num.begin(), d_num.end());
        std::cout << std::endl;

        p.print_unsorted_input();

        
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}


// int main(int argc, char const *argv[])
// {
//     try
//     {
//         if (argc < 2 || argc > 3001)
//             throw std::invalid_argument("Error: Invalid input, must be between 0 and 3000 digits.");
//         PmergeMe p(argv);
//         p.printUnsortedInput();
//         // print_array(p.getVector().begin(), p.getVector().end());
    
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     return 0;
// }