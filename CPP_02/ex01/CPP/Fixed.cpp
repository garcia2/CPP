/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 18:10:44 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Fixed::Fixed(void) : _rawBits(0) {
	
	std::cout << "Default constructor called" << std::endl;

	return;
}	// Cannonical

Fixed::Fixed(int const raw) {

	std::cout << "Int constructor called" << std::endl;

	this->_rawBits = raw * (1 << Fixed::_nbFractionalBits);
	return;
}

Fixed::Fixed(float const raw) {

	std::cout << "Float constructor called" << std::endl;

    this->_rawBits = roundf(raw * (1 << Fixed::_nbFractionalBits));
	return;
}

Fixed::Fixed(Fixed const & src) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	
	return;
}	// Cannonical

Fixed::~Fixed(void) {
	
	std::cout << "Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

float	Fixed::toFloat(void) const {

	return ((float)this->_rawBits / (1 << Fixed::_nbFractionalBits));
}

int		Fixed::toInt(void) const {

	return (this->_rawBits >> Fixed::_nbFractionalBits);
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

Fixed &	Fixed::operator=(Fixed const & rhs) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		
		this->_rawBits = rhs.getRawBits();
	}

	return (*this);
}	// Cannonical

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return (o);
}

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

int	Fixed::getRawBits(void) const {

	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

void	Fixed::setRawBits(int const raw) {
	
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int const	Fixed::_nbFractionalBits = 8;

/*--------------------------------------------------------|Class Attributes|--*/
