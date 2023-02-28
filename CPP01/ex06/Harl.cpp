/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:26:49 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/22 03:54:16 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(){
	
};

Harl::~Harl() {

};

void	Harl::debug( void ) {
	std::cout << "[------DEBUG!----]" <<std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void	Harl::info( void ) {
	std::cout << "[------INFO!----]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[------WARNING!----]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" <<std::endl;
}

void	Harl::error( void ) {
	std::cout << "[------ERROR!----]" <<std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	void	(Harl::*Funcptr[4])(void) =  {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string Levels[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i < 4 && Levels[i] != level)
		i++;
	switch (i) {
	case 0:
		(this->*Funcptr[i++])();
	case 1:
		(this->*Funcptr[i++])();
	case 2:
		(this->*Funcptr[i++])();
	case 3:
		(this->*Funcptr[i++])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		break;
	}
}