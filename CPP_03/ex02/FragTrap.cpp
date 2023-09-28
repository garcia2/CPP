/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 15:56:04 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

FragTrap::FragTrap(void) {
	
	std::cout << "Default FragTrap constructor called" << std::endl;
	
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamages = 30;

	return;
}	// Cannonical (Private)

FragTrap::FragTrap(std::string name) {

	std::cout << "Parametric FragTrap " << name << " constructor called" << std::endl;
	*this = FragTrap();
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const & src) {
	
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

FragTrap::~FragTrap(void) {
	
	std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	FragTrap::highFive(void) {

	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << this->_name << " can't gives a high five, ";
		std::cout << ((this->_hitPoints == 0) ? "he's dead..." : "he has no energy.") << std::endl;
		return ;
	}
	std::cout << this->_name << " gives his mates a HIGH FIVE !" << std::endl;
	this->_energyPoints--;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

FragTrap &	FragTrap::operator=(FragTrap const & other) {
	
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	if (this != &other) {
		
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamages = other.getAttackDamages();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/
