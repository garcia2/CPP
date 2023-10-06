/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:08:00 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

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
		FragTrap(void);						// Cannonical

	public:

		// Constructors & Destructors
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);		// Cannonical
		~FragTrap(void);					// Cannonical

		// Functions
		void	highFive(void);

		// Operators overload
		FragTrap &	operator=(FragTrap const & rhs); // Cannonical

		// Getters;

		// Setters

};

#endif