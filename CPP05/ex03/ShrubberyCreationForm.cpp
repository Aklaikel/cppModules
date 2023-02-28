/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:38:00 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/01 02:59:11 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _target(""){
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void ShrubberyCreationForm::setTarget( std::string target ) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):Form("ShrubberyCreationForm", 145, 137) {
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &type):Form("ShrubberyCreationForm", 145, 137) {
	if (this != &type)
		*this = type;
}


ShrubberyCreationForm const &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &type) {
    setTarget(type.getTarget());
	return *this;
}

void ShrubberyCreationForm::execution( void ) const{
	std::ofstream fl;
	std::string	filename = getTarget() + "_ShrubberyCreationForm";
	fl.open(filename.c_str());
	if(!(fl.good()))
	{
		std::cout << "error: can't open the file" <<std::endl;
		return ;
	}
		fl << 
			"            # #### ####\n"
			"        ### \\/#|### |/####\n"
			"        ##\\/#/ \\||/##/_/##/_#\n"
			"       ###  \\/###|/ \\/ # ###\n"
			"    ##_\\_#\\_\\## | #/###_/_####\n"
			"    ## #### # \\ #| /  #### ##/##\n"
			"    #__#_--###`  |{,###---###-~#\n"
			"                \\ }{\n"
			"                }}{\n"
			"                }}{\n"
			"       aklaikel {{}\n"
			"        , -=-~{ .-^- _\n"
			"                `}\n"
			"                 {"
        << std::endl;
		fl.close();
}