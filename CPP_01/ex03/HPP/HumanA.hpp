/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 15:03:54 by nigarcia         ###   ########.fr       */
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
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		// Functions
		void	attack(void) const;
		
		// Operators overload

		// Getters

		// Setters
		void	setWeapon(Weapon &weapon);

};

#endif