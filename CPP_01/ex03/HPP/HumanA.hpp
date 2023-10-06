/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/06 10:10:52 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

	private:
		
		// Attributes
		std::string	_name;
		Weapon&		_weapon;
		// Functions

	public:

		// Constructors & Destructors
		HumanA(std::string name, Weapon& weapon);   // Cannonical
		~HumanA(void);                         		// Cannonical

		// Functions
		void	attack(void) const;
		
		// Operators overload

		// Getters

		// Setters
		void	setWeapon(Weapon &weapon);

};

#endif