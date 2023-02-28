/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 05:05:41 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/02 02:17:23 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	form[0] = new ShrubberyCreationForm();
	form[1] = new PresidentialPardonForm();
	form[2] = new RobotomyRequestForm();
}

Intern::~Intern() {
	delete form[0];
	delete form[1];
	delete form[2];
}

Intern::Intern(const Intern &type) {
	*this = type;
}

Intern const &Intern::operator=(const Intern &type) {
	(void)type;
	return *this;
}

Form *Intern::makeForm( std::string name, std::string target) {
    std::string forms[4] = {"RobotomyRequestForm","PresidentialPardonForm","ShrubberyCreationForm", "Not Found"};
    int i = 0;
    for (; i < 3 && name != forms[i]; i++);
    switch (i)
    {
        case 0:
            return new RobotomyRequestForm(target);
        case 1:
            return new PresidentialPardonForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            std::cout << "Not Found! \n";
            break;
    }
    return nullptr;
}