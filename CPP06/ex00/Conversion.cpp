/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 03:31:56 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 03:01:23 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <string>

bool PseudoLiteral(std::string &s) {
    return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
            || s == "+inff" || s == "inff" || s == "-inff";
}

void conversionToInt(std::string &s) {
	if (PseudoLiteral(s)) {
		std::cout <<"imposible"<<std::endl;
		return ;
	}
	std::cout << std::atoi(s.c_str()) <<std::endl;
}

void conversionToFloat(std::string &s) {
	float num;
	if (s == "nan") {
		std::cout << s + 'f' <<std::endl;
		return ;
	}
	num = std::strtof(s.c_str(), nullptr);
	if (num - static_cast<int>(num) == 0) {
		std::cout << num  << ".0f" << std::endl;
		return ;
	}
	std::cout << num << 'f' << std::endl;
}

void conversionToDouble(std::string &s) {
	float num;
	if (s == "nanf") {
		std::cout << "nan" <<std::endl;
		return ;
	}
	num = std::strtof(s.c_str(), nullptr);
	if (num - static_cast<int>(num) == 0) {
		std::cout << num  << ".0" << std::endl;
		return ;
	}
	std::cout << num << std::endl;
}

void conversionToChar(std::string &s) {
	if (PseudoLiteral(s) ) {
		std::cout <<"imposible"<<std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(s.c_str()));
	if ((c < ' ' || c > '~') || (c >= '0' && c <= '9') ) {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
	std::cout << c << std::endl;
}
