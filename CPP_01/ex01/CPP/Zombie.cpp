/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 14:52:30 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Zombie::Zombie(void) : _name("Kevin") {

	std::cout << "Default Zombie " << this->_name  << " created" << std::endl;
	return;
}

Zombie::Zombie(std::string name) : _name(name) {
	
	std::cout << "Zombie " << this->_name  << " created" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	
	std::cout << "Zombie " << this->_name  << " is destroyed" << std::endl;
	return;
}

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Zombie::announce(void) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Setters|-----------------------------------------------------------------*/

void	Zombie::setName(std::string name) {

	this->_name = name;
}

/*-----------------------------------------------------------------|Setters|--*/
