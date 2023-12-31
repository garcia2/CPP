/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:35:29 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/06 12:05:28 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor
		AMateria();	// Cannonical

	protected:
		
		// Attributes
		std::string	_type;

		// Functions

		// Hidden Constructor (except for inheritance)
		AMateria(std::string const & type);

	public:

		// Constructors & Destructors
		AMateria(AMateria const & other);	// Cannonical
		virtual ~AMateria(void);			// Cannonical

		// Functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		// Operators overload
		AMateria &	operator=(AMateria const & other); // Cannonical

		// Getters
		std::string const & getType() const; //Returns the materia type

		// Setters

};

#endif