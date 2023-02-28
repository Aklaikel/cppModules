/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 05:18:20 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 22:26:16 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename Type>
void	func(Type c) {
	std::cout << c <<std::endl;
}

int main() {
	int array[8];
	for(int i =0; i < 8; i++)
		array[i] = i;
	iter(array,8, func);
} 