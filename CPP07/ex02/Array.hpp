/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:28:32 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 23:17:44 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include <stdexcept>
#include<string>
#include <sys/_types/_size_t.h>

template<typename Type>
class Array {
	private:
		Type *_array;
		unsigned int _size;
	public:
	Array() {
		_size = 0;
		_array = new Type[_size];
	}
	Array( unsigned int size ) {
		_size = size;
		_array = new Type[_size];
	}
	Array(const Array &array) {
		this->_array = nullptr;
	    *this = array;
	}
	~Array() {}
	Array const &operator=(const Array &array) {
		if (this != &array) {
			delete [] this->_array;
			_size = array._size;
			_array = new Type[_size];
			for(size_t i=0; i < _size; i++)
				_array[i] = array._array[i];
		}
	    return *this;
	}
	
	size_t size() {
		return this->_size;
	}
	
	Type &getElement(size_t idx) {
		return this->_array[idx];	
	}
	
	Type  &operator[](size_t idx) {
		if (idx >= _size)
			throw std::out_of_range("index is out of bounds"); 
		else
			return getElement(idx);
	}

	Type getElement(size_t idx) const{
		return this->_array[idx];	
	}
	
	Type  operator[](size_t idx) const {
		if (idx >= _size)
			throw std::out_of_range("index is out of bounds"); 
		else
			return getElement(idx);
	}
};

