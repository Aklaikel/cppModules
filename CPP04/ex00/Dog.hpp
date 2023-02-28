/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:49:51 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:36:42 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"

class Dog: public Animal
{
public:
	Dog(/* args */);
	Dog(std::string type);
	Dog(const Dog &fill);
	~Dog();
	void makeSound() const ;
};

