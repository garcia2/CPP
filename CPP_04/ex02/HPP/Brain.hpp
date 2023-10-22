/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 17:35:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

	private:
		
		// Attributes
		std::string	_ideas[100];

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Brain(void);					// Cannonical
		Brain(Brain const & other);		// Cannonical
		virtual ~Brain(void);					// Cannonical

		// Functions
		void	toString(void) const;

		// Operators overload
		Brain &	operator=(Brain const & other); // Cannonical

		// Getters
		std::string	getIdea(int index) const;

		// Setters
		void	setIdea(int index, std::string idea);

};

#endif