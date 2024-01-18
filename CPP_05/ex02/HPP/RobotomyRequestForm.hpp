/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:53:27 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 23:31:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

	private:
		
		// Attributes
		const std::string	_target;

		// Functions

		// Hidden Constructor
		RobotomyRequestForm(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		RobotomyRequestForm(const std::string & target);
		RobotomyRequestForm(RobotomyRequestForm const & other);	// Cannonical
		virtual ~RobotomyRequestForm(void);						// Cannonical

		// Functions
		void	execute(const Bureaucrat & executor) const;

		// Operators overload
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & other); // Cannonical

		// Getters
		const std::string getTarget(void) const;

		// Setters

		// Exceptions

};

#endif