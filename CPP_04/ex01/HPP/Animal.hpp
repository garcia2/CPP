/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 17:57:41 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes
		std::string	_type;
		
		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Animal(void);					// Cannonical
		Animal(Animal const & other);	// Cannonical
		virtual ~Animal(void);			// Cannonical

		// Functions
		virtual void	makeSound(void) const;

		// Operators overload
		Animal &	operator=(Animal const & other); // Cannonical

		// Getters
		std::string	getType(void) const;

		// Setters

};

#endif