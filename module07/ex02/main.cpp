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
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a( 5 );

	std::cout << "array A = " << std::endl;
    a.print(arr);

    // Array<int> b(a);
    Array<int> b;
	b = a;
	b.setArray(arr, 5);
	std::cout << "array B = " << std::endl;
    b.getArray();
    int arr1[5] = { 5, 4, 3, 2, 1 };
	std::cout << "array A = " << std::endl;
	a.setArray(arr1, 5);
    a.getArray();

	std::cout << "array B = " << std::endl;
    b.getArray();

    
    return 0;

}