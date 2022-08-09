/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:36:34 by marvin            #+#    #+#             */
/*   Updated: 2022/08/05 09:36:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int main()
{
     MutantStack<int> stack;

    stack.push(5);
    stack.push(17);

    std::cout << stack.top() << std::endl;

    stack.pop();

    std::cout << stack.size() << std::endl;

    stack.push(45);
    stack.push(51);
    stack.push(71);
    stack.push(8969);
    stack.push(3);
    stack.push(2345);
    stack.push(112344);
    stack.push(-12369);
    stack.push(-425);
    stack.push(-4567);
    stack.push(-23567);
    stack.push(9);

    MutantStack<int>::iterator it = stack.begin();
    MutantStack<int>::iterator ite = stack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(stack);
    std::stack<int> stack2;

    stack2.push(5);
    stack2.push(1);
    stack2.push(18);

    stack2 = stack;

    MutantStack<std::string> stack3;

    stack3.push("Poulet");
    stack3.push("Frit");
    stack3.push("PFK");

    MutantStack<std::string>::iterator i = stack3.begin();
    MutantStack<std::string>::iterator ie = stack3.end();

    for (MutantStack<std::string>::iterator a = i; a < ie; ++a) {
        std::cout << *a << std::endl;
    }
}