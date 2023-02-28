/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:38:56 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 23:47:10 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>
class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	~Brain();
	Brain(const Brain &fill);
	const Brain &operator=(const Brain &fill);
};
