/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 18:17:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Dog::Dog(void) {
	
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	
	return;
}	// Cannonical

Dog::Dog(Dog const & src) : AAnimal(src) {
	
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_brain = NULL;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Dog::~Dog(void) {
	
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Dog::makeSound(void) const {

	std::cout << "*Ouaf Ouaf i'm a dog*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Dog &	Dog::operator=(Dog const & other) {
	
	std::cout << "Copy assignment Dog operator called" << std::endl;
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

Brain*	Dog::getBrain(void) const {

	return (this->_brain);
}

/*-----------------------------------------------------------------|Getters|--*/