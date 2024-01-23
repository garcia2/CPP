/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:10:08 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 22:21:21 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

AForm::AForm(const std::string & name, int canSignGrade, int canExecGrade) :
	_name(name),
	_canSignGrade(canSignGrade),
	_canExecGrade(canExecGrade) {

	std::cout << "Parametric AForm constructor called" << std::endl;
	
	this->_signed = false;
	if (canSignGrade < 1 || canExecGrade < 1)
		throw GradeTooHighException();
	if (canSignGrade > 150 || canExecGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const & other) :
	_name(other._name),
	_canSignGrade(other._canSignGrade),
	_canExecGrade(other._canExecGrade) {
	
	std::cout << "Copy AForm constructor called" << std::endl;
	*this = other;
}	// Cannonical

AForm::~AForm(void) {
	
	std::cout << "AForm Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	AForm::beSigned(Bureaucrat & bureaucrat) {
	
	if (bureaucrat.getGrade() > this->_canSignGrade)
		throw AForm::GradeTooLowException();
	
	this->_signed = true;	
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

AForm &	AForm::operator=(AForm const & other) {
	
	std::cout << "Copy assignment AForm operator called" << std::endl;
	if (this != &other) {
		
		this->_signed = other._signed;
	}

	return (*this);
}	// Cannonical

std::ostream &	operator<<(std::ostream & o, AForm const & rhs) {

	o << "\"" <<rhs.getName() << "\" form. ";
	o << "Grade to sign: " << rhs.getCanSignGrade() << ". ";
	o << "Grade to execute: " << rhs.getCanExecGrade() << ".";
	return (o);
}

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

const std::string &	AForm::getName(void) const {

	return (this->_name);
}

int	AForm::getCanSignGrade(void) const {

	return (this->_canSignGrade);
}

int	AForm::getCanExecGrade(void) const {

	return (this->_canExecGrade);
}

/*-----------------------------------------------------------------|Getters|--*/
