/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 02:49:21 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 23:21:59 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string target );
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &type);
	PresidentialPardonForm const &operator=(const PresidentialPardonForm &type);
	std::string getTarget( void ) const;
	void setTarget( std::string target );
	void execution( void ) const;
};

