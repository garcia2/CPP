/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 17:07:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		
		// Attributes
		std::string	_name;
		AMateria*			_inventory[4];

		// Functions
		void	_initInventory(void);

		// Hidden Constructor
		Character(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Character(const std::string& name);
		Character(Character const & other);		// Cannonical
		virtual ~Character(void);				// Cannonical

		// Functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		// Operators overload
		Character &	operator=(Character const & other); // Cannonical

		// Getters
		std::string const & getName() const;

		// Setters

};

#endif