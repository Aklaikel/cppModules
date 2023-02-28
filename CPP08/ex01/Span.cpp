/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:51:21 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/06 00:04:28 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() {
	this->_n = 0;
}
Span::Span(unsigned int n) {
	this->_n = n;
}

Span::Span( Span const &copy) {
	*this = copy;
}

void	Span::setN( unsigned n) {
	this->_n = n;
}

unsigned int	Span::getN( void ) {
	return this->_n;
}

Span const  &Span::operator=( Span const &copy) {
	if (this != &copy) {
		setN(copy._n);
		this->vect = copy.vect;
	}
	return *this;
}

Span::~Span() {
	
}

void	Span::addNumber( int num ) {
	if (this->vect.size() >= this->_n)
			std::cout <<  "vector is Full" << std::endl;
	this->vect.push_back(num);
}

int Span::shortestSpan()
{
    if (this->vect.size() < 2)
        throw std::out_of_range("the vector size is short");
    std::vector <int> v = this->vect;
    int dis;
    std::sort(v.begin(), v.end());
    dis = v[1]-v[0];
    for (size_t i = 1; i + 1 < v.size(); i++) {
        dis = std::min(dis, v[i+1]-v[i]);
    }
    return dis;
}
int Span::longestSpan()
{
    if (this->vect.size() < 2)
        throw std::out_of_range("the vector size is short");
    int min = *std::min_element(this->vect.begin(),this->vect.end());
    int max = *std::max_element(this->vect.begin(),this->vect.end());
    return max - min;
}