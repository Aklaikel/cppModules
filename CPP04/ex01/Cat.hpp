/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:50:59 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 01:56:00 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Cat: public Animal
{
private:
	Brain *_brain;
public:
	Cat(/* args */);
	Cat(std::string type);
	Cat(const Cat &fill);
	~Cat();
	void makeSound() const;
	const Cat &operator=(const Cat &fill);
};

