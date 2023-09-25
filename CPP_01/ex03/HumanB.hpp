/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 22:01:00 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

	private:
		
		// Attributes
		std::string	_name;
		Weapon*		_weapon;
		// Functions

	public:

		// Constructors & Destructors
		HumanB(std::string name);              // Cannonical
		~HumanB(void);                         // Cannonical

		// Functions
		void	attack(void) const;

		// Operators overload

		// Getters

		// Setters
		void	setWeapon(Weapon& weapon);

};

#endif