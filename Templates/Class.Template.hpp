/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 14:56:04 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_TEMPLATE_HPP
# define CLASS_TEMPLATE_HPP

#include <iostream>
//#include <string>

class ClassTemplate {

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
		ClassTemplate(void);						// Cannonical
		ClassTemplate(ClassTemplate const & other);	// Cannonical
		~ClassTemplate(void);						// Cannonical

		// Functions

		// Operators overload
		ClassTemplate &	operator=(ClassTemplate const & other); // Cannonical

		// Getters

		// Setters

};

#endif