/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 22:04:31 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
	
	//std::cout << "HumanA ["<< this->_name << "] constructor called" << std::endl;

	return;
}	// Cannonical

HumanA::~HumanA(void) {
	
	//std::cout << "HumanA ["<< this->_name << "] Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	HumanA::attack(void) const{

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/
