/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Template.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 17:36:31 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Template.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ClassTemplate::ClassTemplate(void) {
	
	std::cout << "Default constructor called" << std::endl;

	return;
}	// Cannonical

ClassTemplate::ClassTemplate(ClassTemplate const & src) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

ClassTemplate::~ClassTemplate(void) {
	
	std::cout << "Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Private|---------------------------------------------*/

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Private|----------------------------------------------*/

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Operators Overload|------------------------------------------------------*/

ClassTemplate &	ClassTemplate::operator=(ClassTemplate const & rhs) {
	
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		
		// this->_param = rhs.getParam();
		// ...
	}

	return (*this);
}

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/


