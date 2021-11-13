/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:45:37 by olabrecq          #+#    #+#             */
/*   Updated: 2021/11/13 18:06:56 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                    putchar(argv[i][j] - 32);
                else
                    putchar(argv[i][j]);
                j++;
            }
            i++;
        }
    }
    else
        cout << "* LOUD AND UMBEARABLE FEEDBACK NOISE *";
    putchar('\n');
    return (0);
}