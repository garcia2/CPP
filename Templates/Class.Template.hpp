/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 00:29:48 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_TEMPLATE_HPP
# define CLASS_TEMPLATE_HPP

#include <iostream>
#include <string>

class ClassTemplate {

	private:
		
		// Attributes

		// Functions

	public:

		// Constructors & Destructors
		ClassTemplate(void);						// Cannonical
		ClassTemplate(ClassTemplate const & src);	// Cannonical
		~ClassTemplate(void);						// Cannonical

		// Functions

		// Operators overload
		ClassTemplate &	operator=(ClassTemplate const & rhs); // Cannonical

		// Getters

		// Setters

};

#endif