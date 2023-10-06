/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 09:24:33 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Point::Point(void) : _x(Fixed()), _y(Fixed()){
	
	return;
}	// Cannonical

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {

	return;
}

Point::Point(Point const & src) : _x(Fixed(src._x)), _y(Fixed(src._y)){
	
	return;
}	// Cannonical

Point::~Point(void) {
	
	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

float	Point::getFloatX(void) const {

	return (this->_x.toFloat());
}

float	Point::getFloatY(void) const {

	return (this->_x.toFloat());
}

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Private|---------------------------------------------*/

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Private|----------------------------------------------*/

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Operators Overload|------------------------------------------------------*/

Point &	Point::operator=(Point const & rhs) {
	
	(void) rhs;
	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

Fixed const	Point::getX(void) const {

	return (this->_x);
}

Fixed const	Point::getY(void) const {

	return (this->_y);
}

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
