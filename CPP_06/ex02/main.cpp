/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/19 17:26:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <typeinfo>
#include "Base.hpp"

Base *	generate(void) {

	int randomNumber = std::rand() % 3;

	if (randomNumber == 0)
		return (new A());
	else if (randomNumber == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base * p) {

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base & p) {

	try {
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) { }

	try {
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) { }

	try {
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) { }
}

int main(void) {

	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Base *base;

	std::cout << "-- Identifying Base * --" << std::endl;
	for (int i = 0; i < 20; i++) {

		base = generate();
		identify(base);
		delete base;
	}
	
	std::cout << std::endl << "-- Identifying Base & --" << std::endl;
	for (int i = 0; i < 20; i++) {

		base = generate();
		identify(*base);
		delete base;
	}
	
	return (0);
}
