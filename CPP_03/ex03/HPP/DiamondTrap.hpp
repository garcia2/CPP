/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/18 17:20:38 by nigarcia         ###   ########.fr       */
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

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)
		DiamondTrap(void);						// Cannonical

	public:

		// Constructors & Destructors
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);	// Cannonical
		~DiamondTrap(void);						// Cannonical

		// Functions
		void	whoAmI(void) const;
		void 	attack(const std::string& target);

		// Operators overload
		DiamondTrap &	operator=(DiamondTrap const & rhs); // Cannonical

		// Getters;
		std::string	getName(void) const;

		// Setters

};

#endif