/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:07:47 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/06 00:16:24 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iterator>
#include <deque>
#include <stack>
#include <vector>

template <typename T>
class	MutantStack: public std::stack<T> {
	public:
		MutantStack(){};
		MutantStack	&operator=(MutantStack const & copy) {
			if (this != &copy) {
				this->c = copy.c;
			}
			return *this;
		}
		~MutantStack()
		{ 
			this->c.clear();
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin() 
		{ 
			return this->c.begin();
		}
		
		iterator end() 
		{ 
			return this->c.end(); 
		}
		
};