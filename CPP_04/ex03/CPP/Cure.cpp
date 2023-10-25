/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 11:12:21 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Cure::Cure(void) : AMateria("cure") {
	
	std::cout << "Default Cure constructor called" << std::endl;

	return;
}	// Cannonical

Cure::Cure(Cure const & other) : AMateria(other) {
	
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Cure::~Cure(void) {
	
	std::cout << "Cure Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void Cure::use(ICharacter& target) {
	
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const {

	return (new Cure());
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Cure &	Cure::operator=(Cure const & other) {
	
	std::cout << "Copy assignment Cure operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType(); // peu d'interet le type est le même pour tous les cure
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/
