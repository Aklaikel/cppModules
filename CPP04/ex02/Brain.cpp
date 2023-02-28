/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:47:18 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 01:47:48 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor Called" <<std::endl;
}

Brain::Brain(const Brain &fill) {
	std::cout << "Brain Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor Called" <<std::endl;
}

const Brain &Brain::operator=(const Brain &fill) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = fill.ideas[i];
	return *this;
}