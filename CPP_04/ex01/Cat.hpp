/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/30 12:48:44 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal { 

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
		Cat(void);				// Cannonical
		Cat(Cat const & other);	// Cannonical
		~Cat(void);				// Cannonical

		// Functions
		virtual void	makeSound(void);

		// Operators overload
		Cat &	operator=(Cat const & other); // Cannonical

		// Getters

		// Setters

};

#endif