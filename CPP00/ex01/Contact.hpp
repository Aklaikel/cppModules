/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:19:44 by aklaikel          #+#    #+#             */
/*   Updated: 2022/05/26 01:39:55 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
using std::string;

class Contact
{
private:
    string  FirstName;
    string  LastName;
    string  NickName;
    string  NumTel;
    string  DarkestSecret;
    
public:
    string getFirstName(void) const;
    string getLastName(void) const;
    string getNickName(void) const;
    string getNumTel(void) const;
    string getDarkestSecret(void) const;

    void setFirstName(string s);
    void setLastName(string s);
    void setNickName(string s);
    void setNumTel(string s);
    void setDarkestSecret(string s);
}; 

#endif