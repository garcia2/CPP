/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:46:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 18:32:51 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	
	std::cout << " - Creation of MateriaSource src" << std::endl;
	IMateriaSource* src = new MateriaSource();	std::cout << std::endl;

	std::cout << " - src learns Ice" << std::endl;
	src->learnMateria(new Ice());				std::cout << std::endl;
	
	std::cout << " - src learns Cure" << std::endl;
	src->learnMateria(new Cure());				std::cout << std::endl;
	
	std::cout << " - Creation of Character me" << std::endl;
	ICharacter* me = new Character("me");		std::cout << std::endl;
	
	AMateria* tmp;
	
	std::cout << " - Creation of mataria ice + equiped to me" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);	std::cout << std::endl;
	
	std::cout << " - Creation of mataria cure + equiped to me" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp); std::cout << std::endl;

	std::cout << " - Creation of character bob" << std::endl;
	ICharacter* bob = new Character("bob"); std::cout << std::endl;

	std::cout << " - me uses his materias at bob" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}
