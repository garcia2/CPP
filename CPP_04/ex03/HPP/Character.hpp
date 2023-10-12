/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 12:37:14 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSTEMPLATE_HPP
# define CLASSTEMPLATE_HPP

#include <iostream>
//#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		
		// Attributes
		std::string	_name;
		AMateria*			_inventory[4];

		// Functions

		// Hidden Constructor
		Character(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Character(Character const & other);		// Cannonical
		~Character(void);						// Cannonical

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