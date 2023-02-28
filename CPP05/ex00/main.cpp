/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:44:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/29 05:14:36 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat test("anas", 1);
		std::cout << test;
		test.incGrade();
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat test("anas", 150);
		std::cout << test;
		test.decGrade();
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}