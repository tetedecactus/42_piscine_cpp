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

#include "Span.hpp"

int main()
{
   {
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest = " << sp.shortestSpan() << std::endl;
        std::cout << "Longest = " << sp.longestSpan() << std::endl;

       try
	   {
            sp.addNumber(10);
	   }
	   catch(const std::exception& e)
	   {
		std::cerr << e.what() << '\n';
	   }
	   
    }

    {
        srand(static_cast<unsigned int>(time(NULL)));

        std::vector<int> v;
        for (std::size_t i = 0; i < 10000; ++i) {
            v.push_back(rand());
        }

        Span s(10000);

        s.addNumberRange(v.begin(), v.end());
        std::cout << "Shortest = " << s.shortestSpan() << std::endl;
        std::cout << "Longest = " << s.longestSpan() << std::endl;
    }

    {
        Span s(10);

        try 
		{
			std::cout << "test 1" << std::endl;
            std::cout << "Shortest = " << s.shortestSpan() << std::endl;
        } 
		catch (const std::exception& e) 
		{
            std::cout << e.what() << "\n";
        }

        try 
		{
			std::cout << "test 2" << std::endl;
            std::cout << "Longest = " << s.longestSpan() << std::endl;
        } 
		catch (const std::exception& e) 
		{
            std::cout << e.what() << "\n";
        }

        s.addNumber(5);

        try 
		{
			std::cout << "test 3" << std::endl;
            std::cout << "Shortest = " << s.shortestSpan() << std::endl;
        } 
		catch (const std::exception& e) 
		{
            std::cout << e.what() << "\n";
        }

        try 
		{
			std::cout << "test 4" << std::endl;
            std::cout << "Longest = " << s.longestSpan() << std::endl;
        } 
		catch (const std::exception& e) 
		{
            std::cout << e.what() << "\n";
        }

        Span s2(s);
        Span s3;

        s3 = s2;

        s3.addNumber(1);
        s3.addNumber(8);

        std::cout << "test 5" << std::endl;
        std::cout << "Longest = " << s3.longestSpan() << std::endl;
    }
}