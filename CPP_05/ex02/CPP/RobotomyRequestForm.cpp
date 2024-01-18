/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 14:21:18 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
	AForm("RobotomyRequestForm", 72, 45),
	_target(target) {
	
	std::cout << "Parametric RobotomyRequestForm constructor called" << std::endl;
}	// Cannonical

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) :
	AForm(other),
	_target(other._target) {
	
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
}	// Cannonical

RobotomyRequestForm::~RobotomyRequestForm(void) {
	
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/

/*--|Object functions :: Public|----------------------------------------------*/

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const {

	std::cout << executor.getName() << " try to execute form '" << this->getName() << "'" << std::endl;
	
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_canExecGrade)
		throw AForm::GradeTooLowException();

	std::cout << "Makes some drilling noises" << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0){ 

		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	}
	else {

		std::cout << this->_target << "'s robotomizing failed" << std::endl;
	}
}

/*----------------------------------------------|Object functions :: Public|--*/

/*--|Operators Overload|------------------------------------------------------*/

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & other) {
	
	std::cout << "Copy assignment RobotomyRequestForm operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/

/*--|Getters|-----------------------------------------------------------------*/

const std::string RobotomyRequestForm::getTarget(void) const {

	return (this->_target);
}

/*-----------------------------------------------------------------|Getters|--*/
