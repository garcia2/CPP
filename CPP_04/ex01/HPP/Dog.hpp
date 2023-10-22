/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 18:10:36 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal { 

	private:
		
		// Attributes
		Brain*		_brain;

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Dog(void);				// Cannonical
		Dog(Dog const & other);	// Cannonical
		virtual ~Dog(void);				// Cannonical

		// Functions
		virtual void	makeSound(void) const;

		// Operators overload
		Dog &	operator=(Dog const & other); // Cannonical

		// Getters
		Brain*		getBrain(void) const;

		// Setters

};

#endif
