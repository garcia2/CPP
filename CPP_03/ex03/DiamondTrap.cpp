/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:12:41 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

DiamondTrap::DiamondTrap(void) {
	
	std::cout << "Default DiamondTrap constructor called" << std::endl;

	this->FragTrap::_hitPoints = FragTrap::_hitPointsRef;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPointsRef;
	this->FragTrap::_attackDamages = FragTrap::_attackDamages;
	this->_name = "defaultName";

	return;
}	// Cannonical (Private)

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "Parametric DiamondTrap " << name << " constructor called" << std::endl;

	this->FragTrap::_hitPoints = FragTrap::_hitPointsRef;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPointsRef;
	this->FragTrap::_attackDamages = FragTrap::_attackDamages;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

DiamondTrap::~DiamondTrap(void) {
	
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void 	DiamondTrap::whoAmI(void) const {

	std::cout << "My name is " << this->_name;
	std::cout << " but i'm also known as " << this->ClapTrap::_name << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & other) {
	
	std::cout << "Copy assignment DiamondTrap operator called" << std::endl;
	if (this != &other) {
		
		this->_name = other.getName();
		this->ClapTrap::_name = other.ClapTrap::getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamages = other.getAttackDamages();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	DiamondTrap::getName(void) const {

	return (this->_name);
}

/*-----------------------------------------------------------------|Getters|--*/
