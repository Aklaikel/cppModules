/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:35:40 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 02:16:32 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(/* args */);
		FragTrap(std::string name);
		FragTrap(const FragTrap &fill);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};
