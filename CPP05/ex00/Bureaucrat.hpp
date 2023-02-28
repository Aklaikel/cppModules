/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 03:09:19 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/29 05:07:20 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

class Bureaucrat
{
private:
	std::string _name;
	int				_grade;
public:
	Bureaucrat(/* args */);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &type);
	Bureaucrat const &operator=(const Bureaucrat &type);
	Bureaucrat(std::string name, int grade);
	std::string getName() const;
	void setName( std::string name );
	int getGrade() const;
	void setGrade( int grade );
	void decGrade();
	void incGrade();
	class GradeTooHighException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			const char *what() const throw();
	};
};
std::ostream & operator << (std::ostream & stream, const Bureaucrat & obj);

