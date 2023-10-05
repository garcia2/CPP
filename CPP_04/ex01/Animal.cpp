/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/03 10:00:00 by nicolas          ###   ########.fr       */
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
	this->_brain = NULL;
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

void	Animal::makeSound(void) {

	std::cout << "*weird Animal noise*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Protected|-------------------------------------------*/

/*-------------------------------------------|Object functions :: Protected|--*/


/*--|Object functions :: Private|---------------------------------------------*/

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Protected|--------------------------------------------*/

/*--------------------------------------------|Class functions :: Protected|--*/


/*--|Class functions :: Private|----------------------------------------------*/

/*----------------------------------------------|Class functions :: Private|--*/



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


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
