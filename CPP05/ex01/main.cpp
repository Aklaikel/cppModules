/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 04:44:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/30 02:32:33 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat francis("Anas", 100);
		std::cout << francis << std::endl;

		Form form1("Taxes", 100, 50);
		std::cout << form1 << std::endl;
		form1.beSigned(francis);
		std::cout << form1 << std::endl;

		std::cout << "---" << std::endl;

		Form form2("1337", 99, 50);
		std::cout << form2 << std::endl;
		francis.signForm(form2);
	}
	catch (std::exception & e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}