/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/10/21 18:16:37 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	test1(void) {

	// AAnimal	Aanimal1 = AAnimal();			std::cout << std::endl;
	// AAnimal	Aanimal2(Aanimal1);				std::cout << std::endl;
	// AAnimal*	Aanimal3 = new AAnimal();	std::cout << std::endl;

	// std::cout << "This is Aanimal1, his type is "<< Aanimal1.getType() << std::endl;
	// std::cout << "This is Aanimal2, his type is "<< Aanimal2.getType() << std::endl;
	// std::cout << "This is Aanimal3, his type is "<< Aanimal3->getType() << std::endl;
	
	// std::cout << std::endl;
	// *Aanimal3 = Aanimal2;
	// std::cout << std::endl;
	
	// std::cout << "This is Aanimal3 again, his type is now "<< Aanimal3->getType() << std::endl;
	// std::cout << "AAnimal3 will make a sound : "; Aanimal3->makeSound();

	// std::cout << std::endl << "------------------" << std::endl << std::endl;

	// Dog	dog1 = Dog();	std::cout << std::endl;	
	// std::cout << "This is dog1, his type is "<< dog1.getType() << std::endl;
	// std::cout << "dog1 will make a sound : "; dog1.makeSound();

	// std::cout << std::endl << "------------------" << std::endl << std::endl;

	Cat	cat1 = Cat();	std::cout << std::endl;
	std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	std::cout << "cat1 will make a sound : "; cat1.makeSound();


	std::cout << std::endl << "------------------" << std::endl << std::endl;

	// AAnimal Aanimal4 = Cat();	std::cout << std::endl;
	// std::cout << "This is Aanimal4, his type is "<< Aanimal4.getType() << std::endl;
	// std::cout << "AAnimal4 will make a sound : "; Aanimal4.makeSound();
	// std::cout << std::endl << "------------------" << std::endl << std::endl;
	
	// delete Aanimal3;
}

void	test2(void) {

	Cat	cat1 = Cat();	std::cout << std::endl;
	
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;

	std::cout << std::endl << "------------------" << std::endl << std::endl;
	
	Dog*	dog1 = new Dog();	std::cout << std::endl;

	//Test copie profonde
	std::cout << "--Test copie profonde" <<std::endl;
	{
		Dog tempdog = *dog1;
	}
	std::cout << "--" << std::endl;
	
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl << std::endl;
	
	std::cout << std::endl << "------------------" << std::endl << std::endl;

	Cat* cat2 = new Cat();	std::cout << std::endl;
	*cat2 = cat1;			std::cout << std::endl;

	std::cout << "Printing idea 58 of cat2 : " << cat2->getBrain()->getIdea(58) << std::endl << std::endl;
	delete cat2;			std::cout << std::endl;

	std::cout << std::endl << "------------------" << std::endl << std::endl;
	
	Dog*	dog2 = new Dog(*dog1);	std::cout << std::endl;

	dog1->getBrain()->setIdea(58, "Pas salut");

	std::cout << "Printing idea 58 of dog2 : " << dog2->getBrain()->getIdea(58) << std::endl << std::endl;

	delete dog2;			std::cout << std::endl;
	delete dog1;			std::cout << std::endl;
}

void	test3(void) {

	int	nbAAnimals = 10;

	AAnimal*	Aanimals[nbAAnimals];

	for (int i = 0; i < nbAAnimals / 2; i++) {

		std::cout << "Construction of Aanimal n°" << i << ":" << std::endl;
		Aanimals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = nbAAnimals / 2; i < nbAAnimals; i++) {

		std::cout << "Construction of Aanimal n°" << i << ":" << std::endl;
		Aanimals[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < nbAAnimals; i++) {

		std::cout << "AAnimal n°" << i << " will make a sound : ";
		Aanimals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < nbAAnimals; i++) {

		std::cout << "Destruction of Aanimal n°" << i << ":" << std::endl;
		delete Aanimals[i];
		std::cout << std::endl;
	}
}

int	main(int argc, char **argv) {

	if (argc == 1) {
		
		std::cout << "#######_DEFAULT TEST (TEST 3)_#######" << std::endl << std::endl;
		test3();
		return (1);
	}

	std::string test(argv[1]);

	if (test.compare("1") == 0) {

		std::cout << "#######_TEST 1_#######" << std::endl << std::endl;
		test1();
	}
	else if (test.compare("2") == 0) {

		std::cout << "#######_TEST 2_#######" << std::endl << std::endl;
		test2();
	}
	else if (test.compare("3") == 0) {

		std::cout << "#######_TEST 3_#######" << std::endl << std::endl;
		test3();
	}
	else {
		std::cerr << "AAnimals : Error : no test " << test << " available"<< std::endl;
	}
	return (0);
}