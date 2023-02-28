/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:51:39 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:29:12 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Default Constructor Called" <<std::endl;
	this->_type = "Animal";
}

Animal::Animal(std::string type) {
	std::cout << "Animal Constructor Called" <<std::endl;
	this->_type   = type;
}

Animal::Animal(const Animal &fill) {
	std::cout << "Animal Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor Called" <<std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::setType( std::string type) {
	this->_type = type;
}

const Animal &Animal::operator=(const Animal &fill) {
	this->_type = fill.getType();
	return *this;
}

void Animal::makeSound() const {
	
}