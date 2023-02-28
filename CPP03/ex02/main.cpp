/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:37:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 01:53:31 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main() {
	ClapTrap	test("Anass");
	ScavTrap	test2("Anass");
	FragTrap	test3("Anass");
	
	test.attack("itchida");
	test.takeDamage(1);
	test.beRepaired(1);
	test2.attack("itchida");
	test2.takeDamage(1);
	test2.beRepaired(1);
	test2.guardGate();
	test3.attack("itchida");
	test3.takeDamage(1);
	test3.beRepaired(1);
	test3.highFivesGuys();
}