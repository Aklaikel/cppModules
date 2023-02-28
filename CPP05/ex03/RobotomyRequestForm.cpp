/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:49:50 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 23:24:22 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _target(""){
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::string RobotomyRequestForm::getTarget( void ) const {
	return this->_target;
}

void RobotomyRequestForm::setTarget( std::string target ) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ):Form("RobotomyRequestForm", 72, 45) {
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &type):Form("RobotomyRequestForm", 72, 45) {
	if (this != &type)
		*this = type;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(const RobotomyRequestForm &type) {
    setTarget(type.getTarget());
	return *this;
}

void RobotomyRequestForm::execution( void ) const{
	std::cout <<"Bzzzzzzzzzzz..." <<std::endl;
	if (rand() %2 )
		std::cout <<  getTarget() + " has been robotomized" <<std::endl;
	else
		std::cout <<  getTarget() + " has been robotomy failed" <<std::endl;
}