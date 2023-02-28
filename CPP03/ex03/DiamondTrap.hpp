/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:55:02 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:20:02 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap(/* args */);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &fill);
	~DiamondTrap();
	void whoAmI();
	void attack(const std::string& target);
};

