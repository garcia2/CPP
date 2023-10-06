/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/06 12:17:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Ice::Ice(void) : AMateria("cure") {
	
	// std::cout << "Default Ice constructor called" << std::endl;

	return;
}	// Cannonical

Ice::Ice(Ice const & other) : AMateria(other) {
	
	// std::cout << "Copy Ice constructor called" << std::endl;
	// *this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Ice::~Ice(void) {
	
	// std::cout << "Ice Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void Ice::use(ICharacter& target) {
	
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Ice* Ice::clone() const {

	return (new Ice());
}

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

Ice &	Ice::operator=(Ice const & other) {
	
	// std::cout << "Copy assignment Ice operator called" << std::endl;
	// if (this != &other) {
		
	// 	this->_type = other.getType(); // peu d'interet le type est le même pour tous les cure
	// }

	(void) other;
	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
