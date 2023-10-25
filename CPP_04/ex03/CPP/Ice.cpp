/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 11:12:32 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Ice::Ice(void) : AMateria("ice") {
	
	std::cout << "Default Ice constructor called" << std::endl;

	return;
}	// Cannonical

Ice::Ice(Ice const & other) : AMateria(other) {
	
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Ice::~Ice(void) {
	
	std::cout << "Ice Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void Ice::use(ICharacter& target) {
	
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const {

	return (new Ice());
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Ice &	Ice::operator=(Ice const & other) {
	
	std::cout << "Copy assignment Ice operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType(); // peu d'interet le type est le même pour tous les cure
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/
