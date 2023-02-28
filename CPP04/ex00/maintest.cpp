/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:50:08 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/26 20:52:38 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

int main() {
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	delete i;
	return 0;
}
