/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/18 17:21:17 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

DiamondTrap::DiamondTrap(void) : ClapTrap() {
	
	std::cout << "Default DiamondTrap constructor called" << std::endl;

	this->_hitPoints = FragTrap::_hitPointsRef;
	this->_energyPoints = ScavTrap::_energyPointsRef;
	this->_attackDamages = FragTrap::_attackDamagesRef;
	this->_name = "defaultName_clap_name";
}	// Cannonical (Private)

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {

	std::cout << "Parametric DiamondTrap " << name << " constructor called" << std::endl;

	this->_hitPoints = FragTrap::_hitPointsRef;
	this->_energyPoints = ScavTrap::_energyPointsRef;
	this->_attackDamages = FragTrap::_attackDamagesRef;
	this->_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = src;
}	// Cannonical

DiamondTrap::~DiamondTrap(void) {
	
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void 	DiamondTrap::whoAmI(void) const {

	std::cout << "My name is " << this->_name;
	std::cout << " but i'm also known as " << this->ClapTrap::_name << std::endl;
}

void 	DiamondTrap::attack(const std::string& target) {
	
	ScavTrap::attack(target);
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
