/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:57:20 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/21 22:14:03 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(void) {
	std::string	Mystr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &Mystr;
	std::string	&stringREF = Mystr;
	
	std::cout << "The memory address of the string variable :" <<&Mystr<<std::endl;
	std::cout << "The memory address held by stringPTR :" <<&stringPTR<<std::endl;
	std::cout << "The memory address held by stringREF :" <<&stringREF<<std::endl;

	std::cout << "The value of the string variable :" <<Mystr<<std::endl;
	std::cout << "The value pointed to by stringPTR :" <<stringPTR<<std::endl;
	std::cout << "The value pointed to by stringREF :" <<stringREF<<std::endl;
	return 0;
}