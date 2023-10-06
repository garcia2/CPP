/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 22:01:19 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

	private:
		
		// Attributes
		std::string	_type;

		// Functions

	public:

		// Constructors & Destructors
		Weapon(void);                          // Cannonical
		Weapon(std::string type);
		~Weapon(void);                         // Cannonical

		// Functions

		// Operators overload

		// Getters
		std::string getType(void) const;

		// Setters
		void	setType(std::string type);
};

#endif