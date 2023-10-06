/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 13:31:02 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

WrongCat::WrongCat(void) {
	
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	
	return;
}	// Cannonical

WrongCat::WrongCat(WrongCat const & src) {
	
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

WrongCat::~WrongCat(void) {
	
	std::cout << "WrongCat Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	WrongCat::makeSound(void) const {

	std::cout << "*MIAOUUU MIAOUUUUUUUUU!*" << std::endl;
}	// (Virtual)

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Operators Overload|------------------------------------------------------*/

WrongCat &	WrongCat::operator=(WrongCat const & other) {
	
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &other) {
		
		this->_type = other.getType();
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/
