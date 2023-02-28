/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 03:15:20 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/24 08:00:05 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point():_x(0), _y(0) {
}

Point::Point(const Fixed x, const Fixed y): _x(x), _y(y) {
	
}

Point::~Point() {

}

Point &Point::operator=(const Point &fx) {
	this->_x = fx._x;
	this->_y = fx._y;
	return *this;
}

Fixed Point::getX() const {
	return this->_x;
}

Fixed Point::getY() const {
	return this->_y;
}

Fixed Point::AreaTriangle(Point const &a, Point const &b, Point const &c) {
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + \
		(c.getX() * (a.getY() - b.getY()))).abs() / Fixed(2.0f));
}