/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:10:52 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 20:57:53 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(/* args */);
	~Cure();
	Cure(std::string const & type);
	Cure(const Cure &fill);
	const Cure &operator=(const Cure &fill);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
