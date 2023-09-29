/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 15:30:09 by nigarcia         ###   ########.fr       */
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
		~Animal(void);					// Cannonical

		// Functions
		void	makeSound(void);

		// Operators overload
		Animal &	operator=(Animal const & other); // Cannonical

		// Getters
		std::string	getType(void) const;

		// Setters

};

#endif