/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:10:08 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/25 09:21:59 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Form::Form(const std::string & name, int canSignGrade, int canExecGrade) :
	_name(name),
	_canSignGrade(canSignGrade),
	_canExecGrade(canExecGrade) {

	std::cout << "Parametric Form constructor called" << std::endl;
	
	this->_signed = false;
	if (canSignGrade < 1 || canExecGrade < 1)
		throw GradeTooHighException();
	if (canSignGrade > 150 || canExecGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & other) :
	_name(other._name),
	_canSignGrade(other._canSignGrade),
	_canExecGrade(other._canExecGrade) {
	
	std::cout << "Copy Form constructor called" << std::endl;
	*this = other;
}	// Cannonical

Form::~Form(void) {
	
	std::cout << "Form Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Form::beSigned(Bureaucrat & bureaucrat) {
	
	if (bureaucrat.getGrade() > this->_canSignGrade)
		throw Form::GradeTooLowException();
	
	this->_signed = true;	
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Form &	Form::operator=(Form const & other) {
	
	std::cout << "Copy assignment Form operator called" << std::endl;
	if (this != &other) {
		
		this->_signed = other._signed;
	}

	return (*this);
}	// Cannonical

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {

	o << "\"" <<rhs.getName() << "\" form. ";
	o << "Grade to sign: " << rhs.getCanSignGrade() << ". ";
	o << "Grade to execute: " << rhs.getCanExecGrade() << ".";
	return (o);
}

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

const std::string &	Form::getName(void) const {

	return (this->_name);
}

bool	Form::getSigned(void) const {

	return (this->_signed);
}

int	Form::getCanSignGrade(void) const {

	return (this->_canSignGrade);
}

int	Form::getCanExecGrade(void) const {

	return (this->_canExecGrade);
}

/*-----------------------------------------------------------------|Getters|--*/
