/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:32:44 by marvin            #+#    #+#             */
/*   Updated: 2022/08/09 16:32:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator 	iterator;
		
		MutantStack<T> (void) {}
		MutantStack<T> (const MutantStack& rhs) {*this = rhs;}
		~MutantStack<T> (void) {}

		MutantStack& operator=(const MutantStack& rhs)
		{
			this->c = rhs.c;
			return *this;
		}

		iterator	begin (void) { return (this->c.begin()); }

		iterator	end (void) { return (this->c.end()); }
};

// https://en.cppreference.com/w/cpp/container/stack
// Member objects
// Container c
 
// the underlying container