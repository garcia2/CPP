/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/06 12:07:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
//#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {

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
		Ice(void);					// Cannonical
		Ice(Ice const & other);		// Cannonical
		virtual ~Ice(void);			// Cannonical

		// Functions
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);

		// Operators overload
		Ice &	operator=(Ice const & other); // Cannonical

		// Getters

		// Setters

};

#endif