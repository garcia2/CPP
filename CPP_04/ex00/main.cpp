/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/10/25 11:28:46 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

	Animal	*dog1 = new Dog();
	std::cout << "This is dog1, his type is "<< dog1->getType() << std::endl;
	std::cout << "dog1 will make a sound : "; dog1->makeSound();

	std::cout << std::endl;

	Animal	cat1 = Cat();
	std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	std::cout << "cat1 will make a sound : "; cat1.makeSound();

	
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal1 = new WrongAnimal();	std::cout << std::endl;
	const WrongAnimal* wrongCat1 = new WrongCat();				std::cout << std::endl;
	
	std::cout << "This is wrongAnimal1, his type is "<< wrongAnimal1->getType() << std::endl;
	std::cout << "This is wrongCat1,    his type is "<< wrongCat1->getType() << std::endl;

	std::cout << std::endl;

	std::cout << "wrongAnimal1 will make a sound : "; wrongAnimal1->makeSound();
	std::cout << "wrongCat1 will make a sound    : "; wrongCat1->makeSound();

	std::cout << std::endl;

	delete animal3;
	delete dog1;
	delete wrongAnimal1;
	delete wrongCat1;

	return (0);
}
