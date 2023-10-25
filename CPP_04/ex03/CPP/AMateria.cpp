/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 11:11:28 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

AMateria::AMateria(void) {
	
	//std::cout << "Default AMateria constructor called" << std::endl;

	return;
}	// Cannonical

AMateria::AMateria(std::string const & type) : _type(type) {

	//std::cout << "Parametric AMateria constructor called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const & other) {
	
	//std::cout << "Copy AMateria constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

AMateria::~AMateria(void) {
	
	//std::cout << "AMateria Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void AMateria::use(ICharacter& target) {
	
	std::cout << "Can't use a basic materia... " << target.getName() << " laughs loud at you !" << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

AMateria &	AMateria::operator=(AMateria const & other) {
	
	std::cout << "Copy assignment AMateria operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string const & AMateria::getType() const {

	return (this->_type);
}

/*-----------------------------------------------------------------|Getters|--*/
