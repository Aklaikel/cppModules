/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:55:37 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 03:31:06 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default Constructor Called" <<std::endl;
	setName("");
	setHit(FragTrap::getHit());
	setEnergy(ScavTrap::getEnergy());
	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap Constructor Called" <<std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	setHit(FragTrap::getHit());
	setEnergy(ScavTrap::getEnergy());
	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &fill) {
	std::cout << "DiamondTrap Copy Constructor Called" <<std::endl;
	*this = fill;	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Default Destructor Called" <<std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I'am " + this->_name + " My ClapTrap is " +   ClapTrap::getName() <<std::endl;  
}