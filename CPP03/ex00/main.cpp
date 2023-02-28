/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:37:46 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/25 06:47:27 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main() {
	ClapTrap	test("Anass");
	test.attack("itchida");
	test.takeDamage(1);
	test.beRepaired(1);
}