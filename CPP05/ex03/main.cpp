/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:44:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/03 00:28:01 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void) {
    Intern intern;

    try {
        Form *SCF = intern.makeForm("ShrubberyCreationForm", "DNA");
        Bureaucrat b1("anas", 136);
        Bureaucrat b2("itchida", 145);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Form *SCF = intern.makeForm("RobotomyRequestForm", "DNA");
        Bureaucrat b1("anas2", 44);
        Bureaucrat b2("itchida2", 72);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Form *SCF = intern.makeForm("PresidentialPardonForm", "DNA");
        Bureaucrat b1("anas2", 5);
        Bureaucrat b2("itchida2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        Form *SCF = intern.makeForm("None Existing Form", "DNA");
        if (!SCF)
            return 0;
        Bureaucrat b1("anas2", 5);
        Bureaucrat b2("itchida2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}