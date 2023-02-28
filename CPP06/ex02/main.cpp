/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:32:23 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 18:55:33 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <exception>
#include<iostream>

class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void) {
	Base *ptr;
	srand(time(NULL));
	int random = rand() % 3;
	switch (random) {
        case 0:
            std::cout << "A generated" << std::endl;
            ptr = new A();
            break;
        case 1:
            std::cout << "B generated" << std::endl;
            ptr = new B();
            break;
        case 2:
            std::cout << "C generated" << std::endl;
            ptr = new C();
            break;
    }
    return ptr;
}

void identify(Base* p) {
	Base *a = dynamic_cast<A *>(p);
	Base *b = dynamic_cast<B *>(p);
	Base *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A has been identify" << std::endl;
	else if (b)
		std::cout << "B has been identify" << std::endl;
	else if (c)
		std::cout << "C has been identify" << std::endl;
}

void identify(Base& p) {
	Base a;
	Base b;
	Base c;
	try {
		a = dynamic_cast<A &>(p);
		std::cout << "A has been identify" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		b = dynamic_cast<B &>(p);
		std::cout << "B has been identify" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		c = dynamic_cast<C &>(p);
		std::cout << "C has been identify" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main () {
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
}