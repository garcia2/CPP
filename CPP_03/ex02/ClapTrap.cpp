/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:13:04 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ClapTrap::ClapTrap(void) {
	
	std::cout << "Default ClapTrap constructor called" << std::endl;

	this->_hitPoints = ClapTrap::_hitPointsRef;
	this->_energyPoints = ClapTrap::_energyPointsRef;
	this->_attackDamages = ClapTrap::_attackDamagesRef;
	this->_name = "defaultName";

	return;
}	// Cannonical (Protected)

ClapTrap::ClapTrap(std::string name) {

	std::cout << "Parametric ClapTrap " << name << " constructor called" << std::endl;

	this->_hitPoints = ClapTrap::_hitPointsRef;
	this->_energyPoints = ClapTrap::_energyPointsRef;
	this->_attackDamages = ClapTrap::_attackDamagesRef;
	this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

ClapTrap::~ClapTrap(void) {
	
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void 	ClapTrap::attack(const std::string& target) {
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << this->_name << " can't attack, ";
		std::cout << ((this->_hitPoints == 0) ? "he's dead..." : "he has no energy.") << std::endl;
		return ;
	}
	std::cout << this->_name << " deals " << this->_attackDamages << " damage to " << target << " !" << std::endl;
	this->_energyPoints--;
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << this->_name << " takes " << amount << " damage. ";
	if (this->_hitPoints == 0) {

		std::cout << "But he's already dead... F" << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints) {
		
		this->_hitPoints = 0;
		std::cout << "He is dead... Press F to pay respect." << std::endl;
	}
	else {
		
		this->_hitPoints -= amount;
		std::cout << "He has " << this->_hitPoints << " HP left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << this->_name << " can't be repaired, ";
		std::cout << ((this->_hitPoints == 0) ? "he's dead..." : "he has no energy.") << std::endl;
		return ;
	}
	this->_hitPoints+= amount;
	this->_energyPoints--;
	std::cout << this->_name << " repairing. . . He restored " << amount << " HP ! He has now " << this->_hitPoints << " HP." << std::endl;
}


void	ClapTrap::toPrint() const {

	std::cout << "This is " << this->_name << " -" << std::endl;
	std::cout << "	HP: " << this->_hitPoints << std::endl;
	std::cout << "	EP: " << this->_energyPoints << std::endl;
	std::cout << "	AD: " << this->_attackDamages << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

ClapTrap &	ClapTrap::operator=(ClapTrap const & other) {
	
	std::cout << "Copy assignment ClapTrap operator called" << std::endl;
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

std::string	ClapTrap::getName() const {

	return this->_name;
}

unsigned int	ClapTrap::getHitPoints() const {

	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const {

	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamages() const {

	return this->_attackDamages;
}

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

void	ClapTrap::setAttackDamages(unsigned int attackDamages) {

	this->_attackDamages = attackDamages;
}

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

unsigned int	ClapTrap::_hitPointsRef = 10;
unsigned int	ClapTrap::_energyPointsRef = 10;
unsigned int	ClapTrap::_attackDamagesRef = 0;

/*--------------------------------------------------------|Class Attributes|--*/
