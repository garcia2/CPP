/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 13:30:46 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	
	std::cout << "Default WrongAnimal constructor called" << std::endl;

	return;
}	// Cannonical

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

WrongAnimal::~WrongAnimal(void) {
	
	std::cout << "WrongAnimal Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	WrongAnimal::makeSound(void) const {

	std::cout << "*weird WrongAnimal noise*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & other) {
	
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	WrongAnimal::getType(void) const {

	return (this->_type);
}

/*-----------------------------------------------------------------|Getters|--*/
