/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:29:29 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:34:35 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor Called" <<std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string type) {
	std::cout << "Cat Constructor Called" <<std::endl;
	this->_type   = type;
}

Cat::Cat(const Cat &fill) {
	std::cout << "Cat Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor Called" <<std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meoooow!!" <<std::endl;
}