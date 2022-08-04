/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:09:38 by marvin            #+#    #+#             */
/*   Updated: 2022/08/03 22:09:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Base.hpp"
#include "ABC.hpp"

int main()
{
    Base* ptr_ABC;
	ptr_ABC = generate();

	identify( ptr_ABC );
	identify( *ptr_ABC );

	delete ptr_ABC;

	return 0;
}