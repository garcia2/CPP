/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Template.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 19:44:55 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Template.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

ClassTemplate::ClassTemplate(void) {
	
	std::cout << "Default ClassTemplate constructor called" << std::endl;

	return;
}	// Cannonical

ClassTemplate::ClassTemplate(ClassTemplate const & src) {
	
	std::cout << "Copy ClassTemplate constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

ClassTemplate::~ClassTemplate(void) {
	
	std::cout << "ClassTemplate Destructor called" << std::endl;

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
	
	std::cout << "Assignment ClassTemplate '=' operator called" << std::endl;
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
