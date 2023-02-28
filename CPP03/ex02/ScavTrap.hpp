/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:19:30 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:17:25 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"ClapTrap.hpp"

class ScavTrap: virtual public  ClapTrap
{
	public:
	ScavTrap(/* args */);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &fill);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};
