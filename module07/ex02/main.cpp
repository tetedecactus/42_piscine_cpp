/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:40:58 by marvin            #+#    #+#             */
/*   Updated: 2022/08/01 16:40:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main()
{

    // test de getter, setter & copie profonde
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a( 5 );

	std::cout << "array A = " << std::endl;
    a.setArray(arr, 5);
    a.print();

    Array<int> b(a);
	std::cout << "array B = " << std::endl;
    b.print();

    int arr1[5] = { 5, 4, 3, 2, 1 };
    a.setArray(arr1, 5);
	std::cout << "array A = " << std::endl;
    a.print();
    std::cout << "array B = " << std::endl;
    b.print();
    
    int *arr2 = a.getArray();
    b.setArray(arr2, a.getLen());
    std::cout << "array B = " << std::endl;
    b.print();
    
    std::string arrString[3] = {"Bonjour", "Salut", "Bonsoir"};
    Array<std::string> c(3);
    c.setArray(arrString, 3);
    c.print();

    std::string msg = "Bon-matin";
    c[2] = "Bon-matin";
    c.print();




    // try
    // {
    //     a[1] = 0;
    //     a.print();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
    return 0;

}