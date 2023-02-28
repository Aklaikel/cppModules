/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 02:56:23 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/28 02:54:43 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
class AMateria;
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

