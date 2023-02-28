/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:49:28 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:34:24 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor Called" <<std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string type) {
	std::cout << "Dog Constructor Called" <<std::endl;
	this->_type   = type;
}

Dog::Dog(const Dog &fill) {
	std::cout << "Dog Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor Called" <<std::endl;
}

void Dog::makeSound() const {
	std::cout << "Bark Bark !!" <<std::endl;
}
