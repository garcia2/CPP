/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 14:02:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes
		std::string	_type;
		Brain*		_brain;
		
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
		Brain*		getBrain(void) const;

		// Setters

};

#endif