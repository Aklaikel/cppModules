/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:35:11 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 01:26:50 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"ICharacter.hpp"
#include <iostream>
#include <string>

class Character: public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string _name;
		int      i;
	public:
		Character();
		~Character();
		const Character &operator=(const Character &fill);
		Character(const Character &fill);
		Character(std::string const & name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

