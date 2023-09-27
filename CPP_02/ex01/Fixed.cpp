/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/27 17:54:56 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Fixed::Fixed(void) : rawBits(0) {
	
	std::cout << "Default constructor called" << std::endl;

	return;
}	// Cannonical

Fixed::Fixed(int const raw) {

	std::cout << "Int constructor called" << std::endl;

	int	fixedInt = raw * (1 << Fixed::_nbFractionalBits);
	this->rawBits = fixedInt;
	return;
}
Fixed::Fixed(float const raw) {

	std::cout << "Float constructor called" << std::endl;
	float	fixed_float = raw * (1 << Fixed::_nbFractionalBits);
    this->rawBits = roundf(fixed_float);
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

	return ((float)this->rawBits / (1 << Fixed::_nbFractionalBits));
}

int		Fixed::toInt(void) const {

	return (this->rawBits);
}

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Operators Overload|------------------------------------------------------*/

Fixed &	Fixed::operator=(Fixed const & rhs) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		
		this->rawBits = rhs.getRawBits();
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

	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

/*-----------------------------------------------------------------|Setters|--*/


/*--|Setters|-----------------------------------------------------------------*/

void	Fixed::setRawBits(int const raw) {
	
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int const	Fixed::_nbFractionalBits = 8;

/*--------------------------------------------------------|Class Attributes|--*/
