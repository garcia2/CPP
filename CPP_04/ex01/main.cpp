/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/10/05 13:35:37 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {

	Animal	animal1 = Animal();
	Animal	animal2(animal1);
	Animal*	animal3 = new Animal();

	std::cout << std::endl;

	std::cout << "This is animal1, his type is "<< animal1.getType() << std::endl;
	std::cout << "This is animal2, his type is "<< animal2.getType() << std::endl;
	std::cout << "This is animal3, his type is "<< animal3->getType() << std::endl;
	*animal3 = animal2;
	std::cout << "This is animal3 again, his type is now "<< animal3->getType() << std::endl;
	std::cout << "Animal3 will make a sound : "; animal3->makeSound();

	std::cout << std::endl;

	Dog	dog1 = Dog();
	std::cout << "This is dog1, his type is "<< dog1.getType() << std::endl;
	std::cout << "dog1 will make a sound : "; dog1.makeSound();

	std::cout << std::endl;

	Cat	cat1 = Cat();
	std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	std::cout << "cat1 will make a sound : "; cat1.makeSound();


	std::cout << std::endl;

	Animal animal4 = Cat();
	std::cout << "This is animal4, his type is "<< animal4.getType() << std::endl;
	std::cout << "Animal4 will make a sound : "; animal4.makeSound();
	
	delete animal3;
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
	// std::cout << std::endl;
	
	// Cat	cat1 = Cat();	std::cout << std::endl;
	
	// std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	// cat1.getBrain()->getIdea(58) = "Salut";
	// std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	// cat1.getBrain()->setIdea(58, "Salut");
	// std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl << std::endl;

	// Dog*	dog1 = new Dog();	std::cout << std::endl;

	// std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	// dog1->getBrain()->getIdea(58) = "Salut";
	// std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	// dog1->getBrain()->setIdea(58, "Salut");
	// std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl << std::endl;
	
	// Cat* cat2 = new Cat();	std::cout << std::endl;
	
	// *cat2 = cat1;			std::cout << std::endl;

	// std::cout << "Printing idea 58 of cat2 : " << cat2->getBrain()->getIdea(58) << std::endl << std::endl;

	// delete cat2;			std::cout << std::endl;
	
	// Dog*	dog2 = new Dog(*dog1);	std::cout << std::endl;

	// dog1->getBrain()->setIdea(58, "Pas salut");

	// std::cout << "Printing idea 58 of dog2 : " << dog2->getBrain()->getIdea(58) << std::endl << std::endl;

	// delete dog2;			std::cout << std::endl;
	// delete dog1;			std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// int	nbAnimals = 10;

	// Animal*	animals[nbAnimals];

	// for (int i = 0; i < nbAnimals / 2; i++) {

	// 	std::cout << "Construction of animal n°" << i << ":" << std::endl;
	// 	animals[i] = new Cat();
	// 	std::cout << std::endl;
	// }

	// std::cout << std::endl;

	// for (int i = nbAnimals / 2; i < nbAnimals; i++) {

	// 	std::cout << "Construction of animal n°" << i << ":" << std::endl;
	// 	animals[i] = new Dog();
	// 	std::cout << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	// for (int i = 0; i < nbAnimals; i++) {

	// 	std::cout << "Animal n°" << i << " will make a sound : ";
	// 	animals[i]->makeSound();
	// }

	// std::cout << std::endl;

	// for (int i = 0; i < nbAnimals; i++) {

	// 	std::cout << "Destruction of animal n°" << i << ":" << std::endl;
	// 	delete animals[i];
	// 	std::cout << std::endl;
	// }	
	return (0);
}