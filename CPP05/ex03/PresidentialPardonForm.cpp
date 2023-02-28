/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:39:09 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 23:24:29 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _target(""){
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void PresidentialPardonForm::setTarget( std::string target ) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("PresidentialPardonForm", 25, 5){
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &type):Form("PresidentialPardonForm", 25, 5) {
	
	if (this != &type)
		*this = type;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(const PresidentialPardonForm &type) {
    setTarget(type.getTarget());
	return *this;
}

void PresidentialPardonForm::execution( void ) const{
	std::cout << getTarget() + " has been pardoned by Zaphod Beeblebrox" <<std::endl;
}