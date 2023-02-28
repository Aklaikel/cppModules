/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:32:23 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/05 16:17:55 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <ratio>
#include <vector>

int main() {
    std::vector<int>vec;
	for(int i=0; i < 4; i++)
		vec.push_back(i + 1);
	try {
		int t = easyfind(vec, 1);
		 std::cout << "The Target Has Been Found at : " << t << std::endl;
		t = easyfind(vec, 6);
		 std::cout << "Found at : " << t << std::endl;
	 } catch (std::exception &e) {
		 std::cerr << e.what();
	 }
	return 0;
}