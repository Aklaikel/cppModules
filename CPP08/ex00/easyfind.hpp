/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:29:41 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/05 04:42:30 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include<iostream>
#include <iterator>
#include<string>
#include<algorithm>

class NoOccurrenceIsFound: public std::exception {
		public:
			const char *what() const throw() {
				return ("The Target Can't Be Found Inside The Container\n");
			}
};

template<typename Type>
int	easyfind(Type &container, int Target) {
	typename Type::iterator it;
	it = std::find(container.begin(), container.end(), Target);
	if (it == container.end())
		throw  NoOccurrenceIsFound();
	return (std::distance(container.begin(), it));
}