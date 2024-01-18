/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 14:29:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Intern::Intern(void) {
	
	std::cout << "Default Intern constructor called" << std::endl;
}	// Cannonical

Intern::Intern(Intern const & other) {
	
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
}	// Cannonical

Intern::~Intern(void) {
	
	std::cout << "Intern Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

AForm *	Intern::makeForm(const std::string formType, const std::string target) {
	
	for (int i = 0; i < Intern::nbForms; i++)
	{
		if (formType.compare(Intern::formSList[i]) == 0) {
			
			std::cout << "Intern creates \"" << formSList[i] << "\" form." << std::endl;
			return ( (this->*Intern::formFList[i])(target) );
		}
	}
	std::cerr << "Intern : Error : \"" << formType << "\" is not a valid form" << std::endl;
	return (NULL);
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Object functions :: Private|---------------------------------------------*/

AForm * Intern::createPresidentialPardonForm(const std::string target) {

	return new PresidentialPardonForm(target);
}

AForm * Intern::createRobotomyRequestForm(const std::string target) {
	
	return new RobotomyRequestForm(target);
}

AForm * Intern::createShrubberyCreationForm(const std::string target) {

	return new ShrubberyCreationForm(target);
}

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Operators Overload|------------------------------------------------------*/

Intern &	Intern::operator=(Intern const & other) {
	
	std::cout << "Copy assignment Intern operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int	const	Intern::nbForms = 3;

AForm *	(Intern::*Intern::formFList[])(const std::string) = {
	
	&Intern::createShrubberyCreationForm,
	&Intern::createRobotomyRequestForm,
	&Intern::createPresidentialPardonForm,
};

std::string const Intern::formSList[] = {
	
	"shrubbery creation",
	"robotomy request",
	"presidential pardon",
};

/*--------------------------------------------------------|Class Attributes|--*/
