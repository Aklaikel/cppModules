/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 00:56:05 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 03:16:28 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *Materias[4];
	int      i;
public:
	MateriaSource(/* args */);
	~MateriaSource();
	const MateriaSource &operator=(const MateriaSource &fill);
	MateriaSource(const MateriaSource &fill);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

