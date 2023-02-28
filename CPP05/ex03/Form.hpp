/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:16:58 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/01 02:53:31 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string _name;
		bool		_signed;
		int			_gradeSigned;
		int			_gradeExecute;
	public:
		Form();
		virtual ~Form();
		Form(std::string name, int gradexec, int gradesing);
		Form(const Form &type);
		Form const &operator=(const Form &type);
		std::string getName() const;
		void setName( std::string const name );
		int	 getGradeSigned() const;
		int	 getGradeExecute() const;
		void setGradeSinged( int grade );
		void setGradeExecute( int grade );
		bool IsSigned() const;
		void beSigned( Bureaucrat &grade );
		virtual void execution( void ) const = 0;
		void execute(Bureaucrat const & executor) const;
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
	class GradeGotSignedException: public std::exception
	{
		public:
			const char *what() const throw();
	};

};
std::ostream & operator << (std::ostream & stream, const Form & obj);

