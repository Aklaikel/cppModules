/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:19:49 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/06 00:04:36 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <iterator>
#include <vector>

class Span
{
	private:
		unsigned int _n;
		std::vector<int>vect;
	public:
    	Span();
    	Span(unsigned int n);
    	Span( Span const &copy);
    	Span const &operator=( Span const &copy);
    	~Span();
		
		void			setN( unsigned n );
		unsigned int	getN( void );
		void			addNumber( int num );
		int				shortestSpan() ;
		int				longestSpan();

		template<typename T>
		void addNumber(T begin, T end) {
			if (this->vect.size() >= this->_n)
				throw std::out_of_range("vector is Full");
			this->vect.insert(vect.begin(), begin, end);
		}
};

