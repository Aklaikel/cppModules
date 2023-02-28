/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:39:05 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/25 06:49:20 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor Called" <<std::endl;
	this->_name = "";
	this->_Hit = 10;
	this->_Energy = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructor Called" <<std::endl;
	this->_name = name;
	this->_Hit = 10;
	this->_Energy = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &fill) {
	std::cout << "Copy Constructor Called" <<std::endl;
	*this = fill;	
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Destructor Called" <<std::endl;
}

int ClapTrap::getHit( void ) const {
	return this->_Hit;
}
int ClapTrap::getEnergy( void ) const {
	return this->_Energy;
}
int ClapTrap::getAttackDamage( void ) const {
	return this->_AttackDamage;
}
std::string ClapTrap::getName( void ) const {
	return this->_name;
}
void ClapTrap::setName( std::string name) {
	this->_name = name;
}
void ClapTrap::setHit( int hit ) {
	this->_Hit = hit;
}
void ClapTrap::setEnergy( int energy ) {
	this->_Energy = energy;
}
void ClapTrap::setAttackDamage( int attack ) {
	this->_AttackDamage = attack;
}

const ClapTrap &ClapTrap::operator=(const ClapTrap &fill) {
	this->_name = fill.getName();
	this->_Hit = fill.getHit();
	this->_AttackDamage = fill.getAttackDamage();
	this->_Energy = fill.getEnergy();
	return *this;
}

void 	ClapTrap::attack(const std::string& target) {
	if( this->_Energy > 0 && this->_Hit > 0) {
		std::cout << "ClapTrap " + getName() + " attacks " + target +", causing " << getAttackDamage() \
			<< " points of damage!" << std::endl;
		this->_Energy--;		
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if( this->_Energy > 0 && this->_Hit > 0) {
		std::cout << "ClapTrap " + getName() + " lost " <<  amount << " points" << std::endl;
		this->_Hit -= amount;
		if (this->_Hit < 0)
			this->_Hit = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if( this->_Energy > 0 && this->_Hit > 0) {
		std::cout << "ClapTrap " + getName() + " gained " << amount << " points" << std::endl;
		this->_Hit += amount;
		this->_Energy--;		
	}
}