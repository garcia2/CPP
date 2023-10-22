/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassTemplate.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 16:18:21 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSTEMPLATE_HPP
# define CLASSTEMPLATE_HPP

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
		ClassTemplate(ClassTemplate const & other);	// Cannonical
		ClassTemplate(void);						// Cannonical
		virtual ~ClassTemplate(void);				// Cannonical

		// Functions

		// Operators overload
		ClassTemplate &	operator=(ClassTemplate const & other); // Cannonical

		// Getters

		// Setters

};

#endif