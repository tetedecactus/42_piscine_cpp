/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:06:36 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/02 23:43:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << RED << "ERROR " << RESET << "To run -> $>: ./cast00 <char/int/float/double/>" << std::endl;
		return 1;
	}
	Cast data(av[1]);
	data.chechArgs();
	
	
	
	return 0;
}