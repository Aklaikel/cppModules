/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:51:26 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 03:19:48 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

class Animal
{
protected:
	std::string _type;	
public:
	Animal(/* args */);
	Animal(std::string type);
	Animal(const Animal &fill);
	virtual ~Animal();
	std::string getType() const;
	void setType( std::string type);
	const Animal &operator=(const Animal &fill);
	virtual void makeSound()  const = 0;
};
