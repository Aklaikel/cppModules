/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:04:41 by aklaikel          #+#    #+#             */
/*   Updated: 2022/05/26 01:40:38 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

string  Contact::getFirstName(void) const
{
    return(this->FirstName);
}
string  Contact::getLastName(void) const
{
    return(this->LastName);
}
string  Contact::getNickName(void) const
{
    return(this->NickName);
}
string  Contact::getNumTel(void) const
{
    return(this->NumTel);
}
string  Contact::getDarkestSecret(void) const
{
    return(this->DarkestSecret);
}
void  Contact::setFirstName(string s)
{
    this->FirstName = s;
}
void  Contact::setLastName(string s)
{
    this->LastName = s;
}
void  Contact::setNickName(string s)
{
    this->NickName = s;
}
void  Contact::setNumTel(string s)
{
    this->NumTel = s;
}
void  Contact::setDarkestSecret(string s)
{
    this->DarkestSecret = s;
}