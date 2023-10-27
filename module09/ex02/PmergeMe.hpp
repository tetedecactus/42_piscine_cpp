/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 21:40:34 by olabrecq         ###   ########.fr       */
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
    
    void setInput(std::string input);
    std::string getInput() const;
    
    bool checkInput(int argc);
    void paseInput(char const *argv[]);

    std::vector<int> stockVectorInput(char const *argv[]);
    std::list<int> stockListInput(char const *argv[]);
    
    std::vector<int> getVector() const;
    std::list<int> getList() const;

    void setVector(std::vector<int> v);
    void setList(std::list<int> l);
    
    void vectorFordJohnsonSort(std::vector<int> &v);
    void listFordJohnsonSort(std::list<int> &l);
};


// https://en.wikipedia.org/wiki/Merge-insertion_sort
// https://www.youtube.com/watch?v=9pMqIA2ehtE