/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:08 by olabrecq          #+#    #+#             */
/*   Updated: 2023/10/26 12:05:21 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <list>

class PmergeMe
{
private:
    
    std::string _input; 
    
public:

    PmergeMe(int argc, char const *argv[]);
    ~PmergeMe();
    
    void setInput(std::string input);
    std::string getInput() const;
    
    bool checkInput(int argc, char const *argv[]);
    void paseInput(char const *argv[]);

    std::vector<int> stockVectorInput(char const *argv[]);
    std::list<int> stockListInput(char const *argv[]);
    
    void vectorFordJohnsonSort(std::vector<int> &v);
    void listFordJohnsonSort(std::list<int> &l);
};
