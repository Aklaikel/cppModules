/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:57:34 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 03:52:38 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice") {
}

Ice::Ice(std::string const & type) {
	std::cout << "Ice Constructor Called" <<std::endl;
	this->_type = type;
}

Ice::Ice(const Ice &fill) {
	std::cout << "Ice Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Ice::~Ice()
{
	std::cout << "Ice Default Destructor Called" <<std::endl;
}

const Ice &Ice::operator=(const Ice &fill) {
	this->_type = fill.getType();
	return *this;
}

void Ice::use(ICharacter& target) {
	std::cout<< "* shoots an ice bolt at " + target.getName() + " *" <<std::endl;
}

AMateria* Ice::clone() const {
	AMateria  *ice = new Ice();
	return ice;
}