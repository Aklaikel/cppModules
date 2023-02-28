/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 05:51:18 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/24 08:00:40 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	abc = Point::AreaTriangle(a, b, c);
	Fixed	abp = Point::AreaTriangle(a, b, point);
	Fixed	apc = Point::AreaTriangle(a, point, c);
	Fixed	pbc = Point::AreaTriangle(point, b, c);
	if( abp == 0 || apc == 0 || pbc == 0)
		return false;
	return ((abp + apc + pbc) == abc);
}