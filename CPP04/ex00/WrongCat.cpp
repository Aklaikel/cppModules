/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:42:39 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:43:11 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor Called" <<std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(std::string type) {
	std::cout << "WrongCat Constructor Called" <<std::endl;
	this->_type   = type;
}

WrongCat::WrongCat(const WrongCat &fill) {
	std::cout << "WrongCat Copy Constructor Called" <<std::endl;
	*this = fill;	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor Called" <<std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meoooow!!" <<std::endl;
}