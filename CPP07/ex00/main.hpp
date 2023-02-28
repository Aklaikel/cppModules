/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:57:05 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 21:09:00 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template<typename Type>
Type min (Type a, Type b) {
	return (a > b)? b : a;
}

template<typename Type>
Type max (Type a, Type b) {
	return (a > b)? a : b;
}

template<typename Type>
void swap (Type &a, Type &b) {
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}