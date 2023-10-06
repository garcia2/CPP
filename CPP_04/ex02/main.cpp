/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/10/05 14:07:47 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {

	// Dog	dog1 = Dog();
	// std::cout << "This is dog1, his type is "<< dog1.getType() << std::endl;
	// std::cout << "dog1 will make a sound : "; dog1.makeSound();

	// std::cout << std::endl;

	// Cat	cat1 = Cat();
	// std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	// std::cout << "cat1 will make a sound : "; cat1.makeSound();


	// std::cout << std::endl;
	
	///////////////////////////////////////////////////////////////////////////
	
	int	nbAnimals = 10;

	AAnimal*	animals[nbAnimals];

	for (int i = 0; i < nbAnimals / 2; i++) {

		std::cout << "Construction of animal n°" << i << ":" << std::endl;
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = nbAnimals / 2; i < nbAnimals; i++) {

		std::cout << "Construction of animal n°" << i << ":" << std::endl;
		animals[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < nbAnimals; i++) {

		std::cout << "AAnimal n°" << i << " will make a sound : ";
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < nbAnimals; i++) {

		std::cout << "Destruction of animal n°" << i << ":" << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}	
	return (0);
}