/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 17:10:12 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Bureaucrat::Bureaucrat(const std::string & name, int grade) :
	_name(name) {

	std::cout << "Parametric Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & other) :
	_name(other._name),
	_grade(other._grade) {
	
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}	// Cannonical

Bureaucrat::~Bureaucrat(void) {
	
	std::cout << "Bureaucrat Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Bureaucrat::incrementGrade(void) {

	std::cout << "Trying to increment " << this->getName() << "'s grade . . . ";
	if (this->_grade == 1) {

		std::cout << "FAILURE" << std::endl;
		throw GradeTooHighException();
	}
	else {

		std::cout << "SUCCESS" << std::endl;
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade(void) {

	std::cout << "Trying to decrement " << this->getName() << "'s grade . . . ";
	if (this->_grade == 150) {
		
		std::cout << "FAILURE" << std::endl;
		throw GradeTooLowException();
	}
	else {

		std::cout << "SUCCESS" << std::endl;
		this->_grade++;
	}
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & other) {
	
	std::cout << "Copy assignment Bureaucrat operator called" << std::endl;
	if (this != &other) {
		
		this->_grade = other._grade;
	}

	return (*this);
}	// Cannonical

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

const std::string &	Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

/*-----------------------------------------------------------------|Getters|--*/
