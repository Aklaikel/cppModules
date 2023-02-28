/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 03:11:19 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 20:57:30 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(/* args */);
	~Ice();
	Ice(std::string const & type);
	Ice(const Ice &fill);
	const Ice &operator=(const Ice &fill);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
