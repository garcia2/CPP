/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/02 14:34:41 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Cat::Cat(void) {
	
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	
	return;
}	// Cannonical

Cat::Cat(Cat const & src) {
	
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Cat::~Cat(void) {
	
	std::cout << "Cat Destructor called" << std::endl;
	//this->Animal::~Animal();

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Cat::makeSound(void) {

	std::cout << "*MIAOUUU MIAOUUUUUUUUU!*" << std::endl;
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

Cat &	Cat::operator=(Cat const & other) {
	
	std::cout << "Copy assignment Cat operator called" << std::endl;
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

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
