/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:57:50 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 23:21:38 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<fstream>
#include"Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &type);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm const &operator=(const ShrubberyCreationForm &type);
	std::string getTarget( void ) const;
	void setTarget( std::string target );
	void execution( void ) const;
};
