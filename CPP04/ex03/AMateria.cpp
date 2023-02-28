/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 01:31:47 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 03:37:05 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Default Constructor Called" <<std::endl;
	this->_type = "";
}

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria Constructor Called" <<std::endl;
	this->_type = type;
}

void AMateria::use(ICharacter& target) {
	(void) target;
}

std::string const &AMateria::getType() const {
	return this->_type;
}
