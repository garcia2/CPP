/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 14:20:40 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
	AForm("PresidentialPardonForm", 25, 5),
	_target(target) {
	
	std::cout << "Parametric PresidentialPardonForm constructor called" << std::endl;
}	// Cannonical

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other) :
	AForm(other),
	_target(other._target) {
	
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
}	// Cannonical

PresidentialPardonForm::~PresidentialPardonForm(void) {
	
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/

/*--|Object functions :: Public|----------------------------------------------*/

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const {

	std::cout << executor.getName() << " try to execute form '" << this->getName() << "'" << std::endl;
	
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_canExecGrade)
		throw AForm::GradeTooLowException();

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/

/*--|Operators Overload|------------------------------------------------------*/

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & other) {
	
	std::cout << "Copy assignment PresidentialPardonForm operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/

/*--|Getters|-----------------------------------------------------------------*/

const std::string PresidentialPardonForm::getTarget(void) const {

	return (this->_target);
}

/*-----------------------------------------------------------------|Getters|--*/
