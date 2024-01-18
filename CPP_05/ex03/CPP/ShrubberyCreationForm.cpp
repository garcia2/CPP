/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 01:18:31 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	
	std::cout << "Parametric ShrubberyCreationForm constructor called" << std::endl;
}	// Cannonical

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other) : AForm(other), _target(other._target) {
	
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
}	// Cannonical

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/

/*--|Object functions :: Public|----------------------------------------------*/

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_canExecGrade)
		throw AForm::GradeTooLowException();

	std::ofstream file((this->_target + "_shrubbery").c_str());

	if (!file.is_open()) {
		std::cout << executor.getName() << " couldn't execute form '" << this->getName() << "' cause of an error at file's creation" << std::endl;
		return;
	}

	file << "   *\n";
	file << "  ***\n";
	file << " *****\n";
	file << "*******\n";
	file << "  |||\n";
	file << "  |||\n";

	file.close();

}

/*----------------------------------------------|Object functions :: Public|--*/

/*--|Operators Overload|------------------------------------------------------*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other) {
	
	std::cout << "Copy assignment ShrubberyCreationForm operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/

/*--|Getters|-----------------------------------------------------------------*/

const std::string ShrubberyCreationForm::getTarget(void) const {

	return (this->_target);
}

/*-----------------------------------------------------------------|Getters|--*/
