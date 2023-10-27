/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:21:33 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 21:52:59 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        PmergeMe p(argc, argv);
        
        std::vector<int> v = p.getVector();
        std::list<int> l = p.getList();
        
        p.vectorFordJohnsonSort(v);
        p.listFordJohnsonSort(l);
        
        std::cout << "Vector: ";
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
        std::cout << "List: ";
        for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}