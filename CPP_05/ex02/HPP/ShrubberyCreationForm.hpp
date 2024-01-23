/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:53:27 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 19:58:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

	private:
		
		// Attributes
		std::string	_target;

		// Functions

		// Hidden Constructor
		ShrubberyCreationForm(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		ShrubberyCreationForm(const std::string & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & other);	// Cannonical
		virtual ~ShrubberyCreationForm(void);						// Cannonical

		// Functions
		void	execute(const Bureaucrat & executor) const;

		// Operators overload
		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & other); // Cannonical

		// Getters
		const std::string &	getTarget(void) const;

		// Setters

		// Exceptions
};

#endif