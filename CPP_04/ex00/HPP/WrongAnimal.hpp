/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 13:19:56 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

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
		WrongAnimal(void);					// Cannonical
		WrongAnimal(WrongAnimal const & other);	// Cannonical
		virtual ~WrongAnimal(void);					// Cannonical

		// Functions
		void	makeSound(void) const;

		// Operators overload
		WrongAnimal &	operator=(WrongAnimal const & other); // Cannonical

		// Getters
		std::string	getType(void) const;

		// Setters

};

#endif