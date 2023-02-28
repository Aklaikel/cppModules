/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:06:43 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 22:18:52 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sys/_types/_size_t.h>

template <typename Type>
void iter(Type *a,size_t b, void(*func)(Type c)) {
	for(size_t i=0; i < b; i++)
		func(a[i]);
}