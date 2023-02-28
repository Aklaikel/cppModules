/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:43:57 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:45:13 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

class WrongAnimal
{
protected:
	std::string _type;	
public:
	WrongAnimal(/* args */);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &fill);
	virtual ~WrongAnimal();
	std::string getType() const;
	void setType( std::string type);
	const WrongAnimal &operator=(const WrongAnimal &fill);
	void makeSound()  const;
};