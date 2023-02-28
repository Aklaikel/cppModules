/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 01:05:01 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 03:04:47 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

static bool validate(std::string &s) {
	  if (s.length() == 1 && ((s[0] >= ' ' && s[0] < '0') || (s[0] > '9' && s[0] <= '~'))) {
        s = std::to_string(static_cast<int>(s[0]));
        return true;
    }
    int z = std::count(s.begin(), s.end(), '+');
    int n = std::count(s.begin(), s.end(), '-');
    if (PseudoLiteral(s))
        return true;
    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];
        if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
            return false;
		if (s[i] == 'f' && i != s.size() -1)
			return false;
    }
	if (z > 1 || n > 1 )
            return false;
	if (z == 1 && n >= 1 )
            return false;
	if (std::count(s.begin(), s.end(), '+') > 1 || std::count(s.begin(), s.end(), '-') > 1 )
            return false;
	else if (int(s[0]) > 126 && int(s[0]) < 32)
        return (false);
    return true;
}
 

int main (int ac , char **av) {
	if (ac != 2)
		return (std::cout << "invalid arguments" <<std::endl, 1);
	std::string  mystring = av[1];
	if (!validate(mystring))
		return(std::cout << "Invalid input", 1);
	std::cout << "char: ", conversionToChar(mystring);
    std::cout << "int: ", conversionToInt(mystring);
    std::cout << "float: ", conversionToFloat(mystring);
    std::cout << "double: ", conversionToDouble(mystring);
	return 0;
}



