/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 15:13:04 by nicolas          ###   ########.fr       */
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