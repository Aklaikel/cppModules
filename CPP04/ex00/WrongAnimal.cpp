/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:43:49 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:46:04 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor Called" <<std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal Constructor Called" <<std::endl;
	this->_type   = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &fill) {
	std::cout << "WrongAnimal Copy Constructor Called" <<std::endl;
	*this = fill;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor Called" <<std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::setType( std::string type) {
	this->_type = type;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &fill) {
	this->_type = fill.getType();
	return *this;
}

void WrongAnimal::makeSound() const {
	
}
