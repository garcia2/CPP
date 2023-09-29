/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:12:27 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ScavTrap::ScavTrap(void) {
	
	std::cout << "Default ScavTrap constructor called" << std::endl;
	
	this->_hitPoints = ScavTrap::_hitPointsRef;
	this->_energyPoints = ScavTrap::_energyPointsRef;
	this->_attackDamages = ScavTrap::_attackDamagesRef;
	this->_name = "defaultName";

	return;
}	// Cannonical (Protected)

ScavTrap::ScavTrap(std::string name) {

	std::cout << "Parametric ScavTrap " << name << " constructor called" << std::endl;
	
	this->_hitPoints = ScavTrap::_hitPointsRef;
	this->_energyPoints = ScavTrap::_energyPointsRef;
	this->_attackDamages = ScavTrap::_attackDamagesRef;
	this->_name = name;

	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

ScavTrap::~ScavTrap(void) {
	
	std::cout << "ScavTrap " << this->_name << " Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	ScavTrap::guardGate(void) {

	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << this->_name << " can't be in Gate Keeper mode, ";
		std::cout << ((this->_hitPoints == 0) ? "he's dead..." : "he has no energy.") << std::endl;
		return ;
	}
	std::cout << this->_name << " is now in Gate Keeper mode !" << std::endl;
	this->_energyPoints--;
}

/*----------------------------------------------|Object functions :: Public|--*/



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



/*--|Class Attributes|--------------------------------------------------------*/

unsigned int	ScavTrap::_hitPointsRef = 100;
unsigned int	ScavTrap::_energyPointsRef = 50;
unsigned int	ScavTrap::_attackDamagesRef = 20;

/*--------------------------------------------------------|Class Attributes|--*/
