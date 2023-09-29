/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:42:41 by nigarcia          #+#    #+#             */
/*   Updated: 2023/09/29 15:22:27 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

int	main(void) {

	Animal	animal1 = Animal();
	Animal	animal2(animal1);
	Animal*	animal3 = new Animal();

	std::cout << "This is animal1, his type is "<< animal1.getType() << std::endl;
	std::cout << "This is animal2, his type is "<< animal2.getType() << std::endl;
	std::cout << "This is animal3, his type is "<< animal3->getType() << std::endl;
	*animal3 = animal2;
	std::cout << "This is animal3 again, his type is now "<< animal3->getType() << std::endl;
	delete animal3;
	return (0);
}