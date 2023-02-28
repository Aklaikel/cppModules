/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:50:59 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:34:01 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"

class Cat: public Animal
{
public:
	Cat(/* args */);
	Cat(std::string type);
	Cat(const Cat &fill);
	~Cat();
	void makeSound() const;
};

