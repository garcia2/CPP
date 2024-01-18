/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 03:10:41 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

	private:
		
		// Attributes
		static AForm *				(Intern::*formFList[])(const std::string);		
		static int const			nbForms;
		static std::string const	formSList[];

		// Functions
		AForm * createPresidentialPardonForm(const std::string target);
		AForm * createRobotomyRequestForm(const std::string target);
		AForm * createShrubberyCreationForm(const std::string target);

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Intern(Intern const & other);	// Cannonical
		Intern(void);						// Cannonical
		virtual ~Intern(void);				// Cannonical

		// Functions
		AForm * makeForm(const std::string formType, const std::string target);
		void test(void);
		// Operators overload
		Intern &	operator=(Intern const & other); // Cannonical

		// Getters

		// Setters

		// Exceptions

};

#endif