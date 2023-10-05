/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/30 12:45:02 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Dog::Dog(void) {
	
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	
	return;
}	// Cannonical

Dog::Dog(Dog const & src) {
	
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Dog::~Dog(void) {
	
	std::cout << "Dog Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Dog::makeSound(void) {

	std::cout << "*Ouaf Ouaf i'm a dog*" << std::endl;
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

Dog &	Dog::operator=(Dog const & other) {
	
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
