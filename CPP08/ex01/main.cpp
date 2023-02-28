/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:32:23 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/06 00:04:52 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()  {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "---------------- myTests -----------------" <<std::endl;
	sp.addNumber(11);
	
	try {	
		Span sp = Span(10000);
		
		std::vector<int> vv;
		
		for (int i = 0; i < 10000; i++)
            vv.push_back(i);
		sp.addNumber(vv.begin(),vv.end());
		std::cout << "The Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "The Longest  Span is : " << sp.longestSpan() << std::endl;
    }
	catch(const std::exception& e)
	 {
		 std::cerr << e.what() << '\n';
	 }
	try {	
		Span sp = Span(10);
		
		std::vector<int> vv;
		for (int i = 0; i < 10000; i++)
            vv.push_back(i);
		sp.addNumber(vv.begin(),vv.end());
		sp.addNumber(vv.begin(),vv.end());
		std::cout << "The Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "The Longest  Span is : " << sp.longestSpan() << std::endl;
    }
	catch(const std::exception& e)
	 {
		 std::cerr << e.what() << '\n';
	 }
	return 0;
}