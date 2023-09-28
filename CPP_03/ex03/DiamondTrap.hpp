/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 15:39:34 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		
		// Attributes
		std::string	_name;

		// Functions

		// Hidden Constructors
		DiamondTrap(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);	// Cannonical
		~DiamondTrap(void);						// Cannonical

		// Functions
		void	whoAmI(void) const;

		// Operators overload
		DiamondTrap &	operator=(DiamondTrap const & rhs); // Cannonical

		// Getters;
		std::string	getName(void) const;

		// Setters

};

#endif