/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/08 11:13:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>

//Create a program that takes three parameters in the following order: a filename and
//two strings, s1 and s2.

//It will open the file <filename> and copies its content into a new file
//<filename>.replace, replacing every occurrence of s1 with s2.

int main(int ac, char** av) {

    int i;
    std::string s1;
    std::string s2;
    std::ifstream ifs;
//    (void)av;
    i = 0;
    if (ac == 4) {
        ifs.open(av[2]);
//        s1 = av[3];
//        s2 = av[4];
//        std::cout << "s1 : " << s1 <<std::endl;
//        std::cout << "s2 : " << s2 <<std::endl;
//
////        ifs >> s1 >> s2;
//        std::cout << "s1 : " << s2 <<std::endl;
//        ifs.close();
        printf("inside\n");
        //Use a ofstream qui joint le ac[1] et ."replace"
    }
    else {
        std::cout << "Example of valid input: ./{PROG} {FileName} {String1} {String2}" << std::endl;
    }
}