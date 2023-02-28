/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 03:09:25 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/24 07:59:59 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Fixed.hpp"
class Point
{
private:
	Fixed _x;
	Fixed _y;
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point &operator=(const Point &fx);
	~Point();
	Fixed	getX() const;
	Fixed	getY() const ;
	static Fixed AreaTriangle(Point const &a, Point const &b, Point const &c);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);