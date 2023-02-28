/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:35:34 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:16:12 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructor Called" <<std::endl;
	setName("");
	setHit(100);
	setEnergy(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Constructor Called" <<std::endl;
	setName(name);
	setHit(100);
	setEnergy(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &fill) {
	std::cout << "FragTrap Copy Constructor Called" <<std::endl;
	*this = fill;	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor Called" <<std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap is high five'ing you " <<std::endl;
}

void 	FragTrap::attack(const std::string& target) {
	if( this->_Energy > 0 && this->_Hit > 0) {
		std::cout << "FragTrap " + getName() + " attacks " + target +", causing " << getAttackDamage() \
			<< " points of damage!" << std::endl;
		this->_Energy--;		
	}
}