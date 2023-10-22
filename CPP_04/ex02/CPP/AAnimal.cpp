/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 18:13:18 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

AAnimal::AAnimal(void) : _type("AAnimal") {
	
	std::cout << "Default AAnimal constructor called" << std::endl;

	return;
}	// Cannonical

AAnimal::AAnimal(AAnimal const & src) {
	
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

AAnimal::~AAnimal(void) {
	
	std::cout << "AAnimal Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Operators Overload|------------------------------------------------------*/

AAnimal &	AAnimal::operator=(AAnimal const & other) {
	
	std::cout << "Copy assignment AAnimal operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	AAnimal::getType(void) const {

	return (this->_type);
}

/*-----------------------------------------------------------------|Getters|--*/
