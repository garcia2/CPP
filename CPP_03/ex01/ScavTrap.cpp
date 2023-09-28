/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 13:47:25 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ScavTrap::ScavTrap(void) {
	
	std::cout << "Default ScavTrap constructor called" << std::endl;
	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 20;

	return;
}	// Cannonical (Private)

ScavTrap::ScavTrap(std::string name) {

	std::cout << "Parametric ScavTrap " << name << " constructor called" << std::endl;
	*this = ScavTrap();
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

ScavTrap::~ScavTrap(void) {
	
	std::cout << "ScavTrap Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Private|---------------------------------------------*/

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Private|----------------------------------------------*/

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Operators Overload|------------------------------------------------------*/

ScavTrap &	ScavTrap::operator=(ScavTrap const & other) {
	
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	if (this != &other) {
		
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamages = other.getAttackDamages();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
