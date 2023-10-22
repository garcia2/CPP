/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/10/21 17:33:13 by nicolas          ###   ########.fr       */
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

	Dog	*dog1 = new Dog();
	std::cout << "This is dog1, his type is "<< dog1->getType() << std::endl;
	std::cout << "dog1 will make a sound : "; dog1->makeSound();

	std::cout << std::endl;

	Cat	cat1 = Cat();
	std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	std::cout << "cat1 will make a sound : "; cat1.makeSound();


	std::cout << std::endl;

	Animal animal4 = Cat();
	std::cout << "This is animal4, his type is "<< animal4.getType() << std::endl;
	std::cout << "Animal4 will make a sound : "; animal4.makeSound();
	
	std::cout << std::endl;

	delete animal3;
	delete dog1;
	return (0);
}

// #include <iostream>
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();
	
// 	std::cout << i->getType() << " " << std::endl;
	
// 	i->makeSound(); //will output the cat sound!
// 	meta->makeSound();
// }