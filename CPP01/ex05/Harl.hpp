/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:20:04 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/22 04:25:09 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include<iostream>
#include<string>

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl();
	~Harl();
	void complain( std::string level );
	void not_existed(void);
};

#endif