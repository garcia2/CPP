/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm copy 2.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:53:27 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 23:44:34 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {

	private:
		
		// Attributes
		const std::string	_target;

		// Functions

		// Hidden Constructor
		PresidentialPardonForm(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		PresidentialPardonForm(const std::string & target);
		PresidentialPardonForm(PresidentialPardonForm const & other);	// Cannonical
		virtual ~PresidentialPardonForm(void);						// Cannonical

		// Functions
		void	execute(const Bureaucrat & executor) const;

		// Operators overload
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & other); // Cannonical

		// Getters
		const std::string &	getTarget(void) const;

		// Setters

		// Exceptions

};

#endif