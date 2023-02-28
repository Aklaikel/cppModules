/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:38:17 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:20:17 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int	_Hit;
	int	_Energy;
	int _AttackDamage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &fill);
	ClapTrap(std::string name);
	~ClapTrap();
	std::string getName( void ) const;
	int getHit( void ) const;
	int getEnergy( void ) const;
	int getAttackDamage( void ) const;
	void setName( std::string _name );
	void setHit( int hit );
	void setEnergy( int energy );
	void setAttackDamage( int attack );
	const ClapTrap &operator=(const ClapTrap &fill);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
