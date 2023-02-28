/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:49:51 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 01:58:18 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;
public:
	Dog(/* args */);
	Dog(std::string type);
	Dog(const Dog &fill);
	~Dog();
	void makeSound() const;
	const Dog &operator=(const Dog &fill);
};

