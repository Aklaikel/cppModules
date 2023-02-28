/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:29:29 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 01:57:31 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor Called" <<std::endl;
	this->_type = "Cat";
	this->_brain= new Brain();
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
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << "Meoooow!!" <<std::endl;
}

const Cat &Cat::operator=(const Cat &fill) {
	this->_type = fill.getType();
	this->_brain = new Brain(*fill._brain);
	return *this;
}