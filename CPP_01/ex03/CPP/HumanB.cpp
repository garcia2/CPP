/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 15:08:08 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	
	//std::cout << "HumanB ["<< this->_name << "] constructor called" << std::endl;

	return;
}

HumanB::~HumanB(void) {
	
	//std::cout << "HumanB ["<< this->_name << "] Destructor called" << std::endl;

	return;
}

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	HumanB::attack(void) const{

	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their own hands (SAD)" << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Setters|-----------------------------------------------------------------*/

void	HumanB::setWeapon(Weapon& weapon) {
	
	this->_weapon = &weapon;
}

/*-----------------------------------------------------------------|Setters|--*/
