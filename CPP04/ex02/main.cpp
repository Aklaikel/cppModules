/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:49:04 by aklaikel          #+#    #+#             */
/*   Updated: 2022/06/27 03:20:23 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
	
int main()
{
	Dog test;
	Dog test2 = test;
	Cat test3;
	Cat test1 = test3;
	// Animal animal = new Animal();
	Animal *j[6];
	for(int i = 0 ; i < 6; i++) {
		if(i%2)j[i++] = new Dog();
		j[i] = new Cat();
	}
	for(int i = 0 ; i < 6; i++)
		delete j[i];
}