/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:37:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/25 22:35:00 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main() {
	ClapTrap	test("Anass");
	ScavTrap	test2("Anass");
	test.attack("itchida");
	test.takeDamage(1);
	test.beRepaired(1);
	test2.attack("itchida");
	test2.takeDamage(1);
	test2.beRepaired(1);
	test2.guardGate();
}