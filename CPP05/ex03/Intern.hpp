/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 03:42:05 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/01 05:05:38 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		Form *form[3];
	public:
		Intern();
		~Intern();
		Intern const &operator=(const Intern &type);
		Intern(const Intern &type);
		Form *makeForm( std::string name, std::string target);
};

