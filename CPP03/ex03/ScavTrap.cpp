/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:23:30 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:17:08 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructor Called" <<std::endl;
	setName("");
	setHit(100);
	setEnergy(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Constructor Called" <<std::endl;
	setName(name);
	setHit(100);
	setEnergy(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &fill) {
	std::cout << "ScavTrap Copy Constructor Called" <<std::endl;
	*this = fill;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor Called" <<std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode" <<std::endl;
}

void 	ScavTrap::attack(const std::string& target) {
	if( this->_Energy > 0 && this->_Hit > 0) {
		std::cout << "ScavTrap " + getName() + " attacks " + target +", causing " << getAttackDamage() \
			<< " points of damage!" << std::endl;
		this->_Energy--;		
	}
}