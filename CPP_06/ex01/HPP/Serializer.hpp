/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/19 16:33:04 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.hpp"
#include <stdint.h>

class Serializer {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor
		Serializer(Serializer const & other);	// Cannonical
		Serializer(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		virtual ~Serializer(void); // Cannonical

		// Functions
		static uintptr_t    serialize(Data *ptr);
		static Data *		deserialize(uintptr_t raw);

		// Operators overload
		Serializer &	operator=(Serializer const & other); // Cannonical

		// Getters

		// Setters

		// Exceptions
		
};

#endif