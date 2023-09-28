/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 00:23:10 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Fixed::Fixed(void) : _rawBits(0) {
	
	std::cout << "Default constructor called" << std::endl;

	return;
}	// Cannonical

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



/*--|Operators Overload|------------------------------------------------------*/

Fixed &	Fixed::operator=(Fixed const & rhs) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		
		this->_rawBits = rhs.getRawBits();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

/*-----------------------------------------------------------------|Setters|--*/


/*--|Setters|-----------------------------------------------------------------*/

void	Fixed::setRawBits(int const raw) {
	
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

/*-----------------------------------------------------------------|Getters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int const	Fixed::_nbFractionalBits = 8;

/*--------------------------------------------------------|Class Attributes|--*/
