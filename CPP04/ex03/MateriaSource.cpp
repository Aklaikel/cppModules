/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 01:24:41 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 03:46:09 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource Default Constructor Called" <<std::endl;
	this->i = 0;
}

MateriaSource::MateriaSource(const MateriaSource &fill) {
	std::cout << "MateriaSource Copy Constructor Called" <<std::endl;
	*this = fill;
	for(int i=0; i < 4; i++)
		Materias[i] = (fill.Materias[i] != nullptr) ? (fill.Materias[i]->clone()) :(nullptr); 
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Default Destructor Called" <<std::endl;
		for (int j = 0; j < i; j++)
			delete Materias[j];
}

const MateriaSource &MateriaSource::operator=(const MateriaSource &fill) {
	if (this == &fill)
		return *this;
	this->i = fill.i;
	for(int j = 0; j < 4; j++) {
		if(Materias[j])
			delete Materias[j];
		Materias[j] = nullptr;
	}
	for(int i=0; i < 4; i++)
		Materias[i] = (fill.Materias[i] != nullptr) ? (fill.Materias[i]->clone()) :(nullptr); 
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->i  == 4 || m == nullptr)
		return ;
	this->Materias[i++ % 4] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	if(type != "cure" && type != "ice")
		return 0;
	while(i < this->i)
	{
		if( type == Materias[i]->getType())
			break;
		i++;
	}
	return Materias[i];
}