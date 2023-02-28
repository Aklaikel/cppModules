/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 02:48:47 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 23:21:51 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm( std::string target );
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &type);
	RobotomyRequestForm const &operator=(const RobotomyRequestForm &type);
	std::string getTarget( void ) const;
	void setTarget( std::string target );
	void execution( void ) const;
};
