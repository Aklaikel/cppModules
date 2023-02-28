/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:44:22 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/03 00:19:55 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_grade = 0;
    this->_name = "";
}

std::string Bureaucrat::getName() const {
		return this->_name;
}

void Bureaucrat::setName( std::string const name ) {
	this->_name = name;
}

void Bureaucrat::setGrade( int grade ) {
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

int Bureaucrat::getGrade() const {
		return this->_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &type) {
	*this = type;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	setName(name);
	setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat const &Bureaucrat::operator=(const Bureaucrat &type) {
    setName(type.getName());
    setGrade(type.getGrade());
	return *this;
}


std::ostream & operator << (std::ostream & stream, const Bureaucrat & obj) {
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return stream;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "GradeTooLowException";
}

void Bureaucrat::decGrade() {
	setGrade(getGrade() + 1);	
}

void Bureaucrat::incGrade() {
	setGrade(getGrade() - 1);
}

void Bureaucrat::signForm( Form &form ) {
	try {	
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() <<std::endl;
	}
	catch (std::exception & e) {
		std::cout << this->getName() << " couldn’t sign "
                  << form.getName() << " because " << e.what() << std::endl; 
	}
}

void Bureaucrat::executeForm(Form const & form) {
	
	try {	
		form.execute(*this);
		std::cout << getName() << " signed " << form.getName() <<std::endl;
	}
	catch (std::exception & e) {
		std::cout << this->getName() << " couldn’t execute "
                  << form.getName() << " because " << e.what() << std::endl; 
	}
}