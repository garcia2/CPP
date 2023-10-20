/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/20 14:47:10 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Animal::Animal(void) : _type("Animal") {
	
	std::cout << "Default Animal constructor called" << std::endl;
	this->_brain = new Brain();

	return;
}	// Cannonical

Animal::Animal(Animal const & src) {
	
	std::cout << "Copy Animal constructor called" << std::endl;
	// this->_brain = new Brain();
	//this->_brain = NULL;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Animal::~Animal(void) {
	
	std::cout << "Animal Destructor called" << std::endl;
	delete this->_brain;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Animal::makeSound(void) const {

	std::cout << "*weird Animal noise*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Animal &	Animal::operator=(Animal const & other) {
	
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	Animal::getType(void) const {

	return (this->_type);
}

Brain*	Animal::getBrain(void) const {

	return (this->_brain);
}

/*-----------------------------------------------------------------|Getters|--*/
