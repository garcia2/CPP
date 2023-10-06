/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/06 12:08:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
//#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Cure(void);					// Cannonical
		Cure(Cure const & other);	// Cannonical
		virtual ~Cure(void);		// Cannonical

		// Functions
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);

		// Operators overload
		Cure &	operator=(Cure const & other); // Cannonical

		// Getters

		// Setters

};

#endif