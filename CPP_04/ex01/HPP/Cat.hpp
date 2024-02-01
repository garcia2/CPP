/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 12:15:13 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal { 

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
		Cat(void);				// Cannonical
		Cat(Cat const & other);	// Cannonical
		virtual ~Cat(void);				// Cannonical

		// Functions
		void	makeSound(void) const;

		// Operators overload
		Cat &	operator=(Cat const & other); // Cannonical

		// Getters
		Brain*		getBrain(void) const;

		// Setters

};

#endif
