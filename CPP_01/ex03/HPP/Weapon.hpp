/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 15:07:41 by nigarcia         ###   ########.fr       */
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
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		// Functions

		// Operators overload

		// Getters
		std::string getType(void) const;

		// Setters
		void	setType(std::string type);
};

#endif