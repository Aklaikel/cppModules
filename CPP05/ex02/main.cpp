/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:44:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/03 00:26:12 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main(void) {

    try {
        Form *test = new RobotomyRequestForm("DNA");
        Bureaucrat b1("anas", 44);
        Bureaucrat b2("itchida", 72);
        b2.signForm(*test);
        b1.executeForm(*test);

        b2.executeForm(*test);
        delete test;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Form *test = new PresidentialPardonForm("DNA");
        Bureaucrat b1("anas", 5);
        Bureaucrat b2("itchida", 24);
        b2.signForm(*test);
        b1.executeForm(*test);

        b2.executeForm(*test);
        delete test;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        Form *test = new ShrubberyCreationForm("DNA");
        Bureaucrat b1("anas", 136);
        Bureaucrat b2("itchida", 145);
        b2.signForm(*test);
        b1.executeForm(*test);

        b2.executeForm(*test);
        delete test;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "-------------------------------\n";
    try {
        Form *test = new ShrubberyCreationForm("DNA");
        Bureaucrat b1("anas", 150);
        Bureaucrat b2("itchida", 146);
        b2.signForm(*test);
        b1.executeForm(*test);

        b2.executeForm(*test);
        delete test;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}