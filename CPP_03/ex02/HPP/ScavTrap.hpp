/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 13:36:19 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:
		
		// Attributes
		static unsigned int	_hitPointsRef;
		static unsigned int	_energyPointsRef;
		static unsigned int	_attackDamagesRef;

		// Functions

		// Hidden Constructors
		ScavTrap(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);		// Cannonical
		~ScavTrap(void);					// Cannonical

		// Functions
		void	guardGate(void);

		// Operators overload
		ScavTrap &	operator=(ScavTrap const & rhs); // Cannonical

		// Getters;

		// Setters

};

#endif