/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:26:49 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/22 04:26:59 by aklaikel         ###   ########.fr       */
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
	std::cout << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[------WARNING!----]" <<std::endl;
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" <<std::endl;
}

void	Harl::error( void ) {
	std::cout << "[------ERROR!----]" <<std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::not_existed( void ) {
	std::cout << "Not in the complains\n"; 
}

void	Harl::complain( std::string level ) {
	void	(Harl::*Funcptr[5])(void) =  {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::not_existed};
	std::string Levels[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i < 4 && Levels[i] != level)
		i++;
	(this->*Funcptr[i])();
}