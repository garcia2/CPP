/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/12 13:09:25 by nigarcia         ###   ########.fr       */
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
