/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:04:05 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/03 00:00:12 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    this->_gradeSigned = 1;
    this->_gradeExecute = 1;
    this->_name = "";
	this->_signed = false;
}

Form::~Form() {

}

std::string Form::getName() const {
		return this->_name;
}

void Form::setName( std::string const name ) {
	this->_name = name;
}

void Form::setGradeSinged( int grade ) {
	if(grade < 1)
		throw Form::GradeTooLowException();
	else if(grade > 150)
		throw Form::GradeTooHighException();
	this->_gradeSigned = grade;;
}

void Form::setGradeExecute( int grade ) {
	if(grade < 1)
		throw Form::GradeTooLowException();
	else if(grade > 150)
		throw Form::GradeTooHighException();
	this->_gradeExecute = grade;;
}

int Form::getGradeSigned() const {
		return this->_gradeSigned;
}

int Form::getGradeExecute() const {
		return this->_gradeExecute;
}

Form::Form(const Form &type) {
	*this = type;
}

Form::Form(std::string name, int gradexec, int gradesing) {
	setName(name);
	setGradeExecute(gradexec);
	setGradeSinged(gradesing);
	this->_signed = false;
}


Form const &Form::operator=(const Form &type) {
    setName(type.getName());
    setGradeSinged(type.getGradeSigned());
    setGradeExecute(type.getGradeExecute());
	return *this;
}

bool Form::IsSigned() const {
	return this->_signed;
}

std::ostream & operator << (std::ostream & stream, const Form & obj) {
    stream << obj.getName() << ", Form grade Execute " << obj.getGradeExecute() \
		<< " and the Signed Grade " <<  obj.getGradeSigned() << std::endl;
    return stream;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "GradeTooLowException";
}

const char *Form::GradeGotSignedException::what() const throw() {
	return "The Grade Already Got Signed";
}


void Form::beSigned( Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > getGradeExecute())
		throw Form::GradeTooLowException();
	if (IsSigned())
		throw Form::GradeGotSignedException();
	this->_signed = true;
}

void Form::execute(Bureaucrat const & executor)  const{
	if (executor.getGrade() > getGradeExecute())
		throw Form::GradeTooLowException();
	if (!IsSigned())
	{
		std::cout << " coldn't execute becaues the from not signed yet !" <<std::endl;
		return ;
	}
	execution();
	std::cout << executor.getName() + " executed " + getName() <<std::endl;
}