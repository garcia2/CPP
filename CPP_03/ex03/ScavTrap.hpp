/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 15:13:12 by nicolas          ###   ########.fr       */
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