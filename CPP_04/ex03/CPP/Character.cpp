/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 12:46:42 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Character::Character(void) {
	
	std::cout << "Default Character constructor called" << std::endl;

	return;
}	// Cannonical

Character::Character(Character const & other) {
	
	std::cout << "Copy Character constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Character::~Character(void) {
	
	std::cout << "Character Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void Character::equip(AMateria* m) {

	int	i = 0;

	while (this->_inventory[i] != NULL && i < 4)
		i++;
	if (i == 4)
		return;
	this->_inventory[i] = m;
}

void Character::unequip(int idx) {

	
}

void Character::use(int idx, ICharacter& target) {

	
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

Character &	Character::operator=(Character const & other) {
	
	std::cout << "Copy assignment Character operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
		this->_name = other.getName();
		for (int i = 0; i < 4; i++) {

			this->_inventory[i] = other._inventory[i];
		}
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string const & Character::getName() const {

	return (this->_name)
}

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
