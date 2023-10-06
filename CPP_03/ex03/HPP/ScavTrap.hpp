/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:08:05 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructors

	protected:
		
		// Attributes
		static unsigned int	_hitPointsRef;
		static unsigned int	_energyPointsRef;
		static unsigned int	_attackDamagesRef;

		// Functions

		// Hidden Constructor (except for inheritance)
		ScavTrap(void);						// Cannonical

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