/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:45:37 by olabrecq          #+#    #+#             */
/*   Updated: 2022/03/11 09:42:46 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cout << "* LOUD AND UMBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++) 
    for (int j = 0; av[i][j]; j++)  
            std::cout << char(toupper(av[i][j]));
    std::cout << std::endl;
    return (0); 
}