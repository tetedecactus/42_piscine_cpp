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

class PmergeMe
{
private:
    
    std::string _input; 
    
public:

    PmergeMe(int argc, char const *argv[]);
    ~PmergeMe();
    
    void setInput(std::string input);
    std::string getInput() const;
    
    void mergeMe(std::string input);
    bool checkInput(std::string input);
    
};
