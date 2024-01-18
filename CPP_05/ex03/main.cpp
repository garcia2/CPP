/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/18 03:26:01 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	testForm(AForm *form, Bureaucrat *boss, Bureaucrat *looser) {

	std::cout << *form << std::endl;
	boss->executeForm(*form);
	boss->signForm(*form);
	looser->executeForm(*form);
	boss->executeForm(*form);
}

int main( void )
{
	Bureaucrat	boss("LE BOSS", 1);
	Bureaucrat	looser("LE LOOSER", 150);
	AForm		*form;
	Intern		futurLooser;
	std::cout << std::endl;

	std::cout << boss << std::endl;
	std::cout << looser << std::endl;
	std::cout << std::endl;

	form = futurLooser.makeForm("shrubbery creation", "BIGTREE");
	if (form != NULL) {

		testForm(form, &boss, &looser);
		delete form;
		std::cout << std::endl;
	}

	form = futurLooser.makeForm("robotomy request", "Nagui");
	if (form != NULL) {

		testForm(form, &boss, &looser);
		delete form;
		std::cout << std::endl;
	}

	form = futurLooser.makeForm("presidential pardon", "Nagui");
	if (form != NULL) {

		testForm(form, &boss, &looser);
		delete form;
		std::cout << std::endl;
	}

	
	// boss.executeForm(shrubberyCreationForm);
	// boss.signForm(shrubberyCreationForm);
	// looser.executeForm(shrubberyCreationForm);
	// boss.executeForm(shrubberyCreationForm);
	// std::cout << std::endl;

	// boss.executeForm(RobotomyRequestForm);
	// boss.signForm(RobotomyRequestForm);
	// looser.executeForm(RobotomyRequestForm);
	// boss.executeForm(RobotomyRequestForm);
	// std::cout << std::endl;

	// boss.executeForm(PresidentialPardonForm);
	// boss.signForm(PresidentialPardonForm);
	// looser.executeForm(PresidentialPardonForm);
	// boss.executeForm(PresidentialPardonForm);
	std::cout << std::endl;
	
    return (0);
}