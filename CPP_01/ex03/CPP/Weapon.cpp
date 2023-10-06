/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 22:04:10 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Weapon::Weapon(void) : _type(". . .T'as R frero"){
	
	//std::cout << "Default Weapon constructor called" << std::endl;

	return;
}	// Cannonical

Weapon::Weapon(std::string type) : _type(type) {
	
	//std::cout << "Weapon ["<< this->_type << "] Constructor called" << std::endl;

	return;
}

Weapon::~Weapon(void) {
	
	//std::cout << "Weapon ["<< this->_type << "] Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	Weapon::getType(void) const {

	return (this->_type);
}

/*-----------------------------------------------------------------|Setters|--*/


/*--|Setters|-----------------------------------------------------------------*/

void	Weapon::setType(std::string type) {
	
	this->_type = type;
}

/*-----------------------------------------------------------------|Setters|--*/
