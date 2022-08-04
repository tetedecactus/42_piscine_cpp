/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:46:23 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/03 22:08:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data*	deserialize(uintptr_t raw) { return (reinterpret_cast<Data*>(raw)); }

int main()
{
	Data* data = new Data;

	data->nb = 42;
	data->str = "Harry Potter";
	data->d = 13.69;

	std::cout << PINK << "First let print our  data (struct) value" << RESET << std::endl;
	std::cout << RED << "Int : " << RESET << data->nb << std::endl; 
	std::cout << RED << "String : " << RESET << data->str << std::endl; 
	std::cout << RED << "Double : " << RESET << data->d << std::endl; 
	
	std::cout << PINK << "Now let \"SERIALIZE\" them " << RESET << std::endl;
	
	uintptr_t  dataSerialize = serialize(data);
	std::cout << RED << "serialize data = : " << RESET << dataSerialize << std::endl;
	
	std::cout << PINK << "Now let \"DESERIALIZE\" them " << RESET << std::endl;
	Data* dataDeserialize = deserialize(dataSerialize);
	
	std::cout << PINK << "Now let print the \"DESERIALIZE\" value" << RESET << std::endl;
	std::cout << RED << "Int : " << RESET << dataDeserialize->nb << std::endl; 
	std::cout << RED << "String : " << RESET << dataDeserialize->str << std::endl; 
	std::cout << RED << "Double : " << RESET << dataDeserialize->d << std::endl; 
	
	delete data;
	
	return 0;	
}