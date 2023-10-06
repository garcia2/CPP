/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 13:33:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

AAnimal::AAnimal(void) : _type("AAnimal") {
	
	std::cout << "Default AAnimal constructor called" << std::endl;
	this->_brain = new Brain();

	return;
}	// Cannonical

AAnimal::AAnimal(AAnimal const & src) {
	
	std::cout << "Copy AAnimal constructor called" << std::endl;
	// this->_brain = new Brain();
	this->_brain = NULL;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

AAnimal::~AAnimal(void) {
	
	std::cout << "AAnimal Destructor called" << std::endl;
	delete this->_brain;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	AAnimal::makeSound(void) const {

	std::cout << "*weird AAnimal noise*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

AAnimal &	AAnimal::operator=(AAnimal const & other) {
	
	std::cout << "Copy assignment AAnimal operator called" << std::endl;
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

std::string	AAnimal::getType(void) const {

	return (this->_type);
}

Brain*	AAnimal::getBrain(void) const {

	return (this->_brain);
}

/*-----------------------------------------------------------------|Getters|--*/
