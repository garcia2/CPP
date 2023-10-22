/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 18:12:36 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

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
		AAnimal(void);					// Cannonical
		AAnimal(AAnimal const & other);	// Cannonical
		virtual ~AAnimal(void);			// Cannonical

		// Functions
		virtual void	makeSound(void) const = 0;

		// Operators overload
		AAnimal &	operator=(AAnimal const & other); // Cannonical

		// Getters
		std::string	getType(void) const;

		// Setters

};

#endif