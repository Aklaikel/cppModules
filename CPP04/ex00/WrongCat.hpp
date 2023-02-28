/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:40:51 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:52:26 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat(/* args */);
	WrongCat(std::string type);
	WrongCat(const WrongCat &fill);
	~WrongCat();
	void makeSound() const;
};
