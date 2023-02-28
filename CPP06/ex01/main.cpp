/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 05:18:20 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 18:22:20 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data {
	std::string s1,s2;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data data = {"HI WELCOME", "HI THANK YOU"};
    Data *ptr = deserialize(serialize(&data));
    std::cout << "s1: " << ptr->s1 << std::endl;
    std::cout << "s2: " << ptr->s2 << std::endl;
	std::cout << "is it equal ? : " << ptr << " | " << &data <<std::endl;
	std::cout << ((ptr == &data ) ? "Yes\n" :  "No\n");
} 