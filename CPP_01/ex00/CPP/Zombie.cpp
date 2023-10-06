/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 22:07:16 by nicolas          ###   ########.fr       */
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
