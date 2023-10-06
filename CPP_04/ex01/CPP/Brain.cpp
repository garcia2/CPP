/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/02 13:29:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Brain::Brain(void) {
	
	std::cout << "Default Brain constructor called" << std::endl;

	for (int i = 0; i < 100; i++) {
	
		this->_ideas[i] = "This is a basic idea";
		if (i == 67)
			this->_ideas[i] = "This is a 67 idea";
	}

	return;
}	// Cannonical

Brain::Brain(Brain const & other) {
	
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

Brain::~Brain(void) {
	
	std::cout << "Brain Destructor called" << std::endl;

	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Brain::toString(void) const {
	
	std::cout << "This is your brain ideas" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "Idea n°" << i << ": " << this->_ideas[i] <<std::endl;
	
}

/*----------------------------------------------|Object functions :: Public|--*/

/*--|Operators Overload|------------------------------------------------------*/

Brain &	Brain::operator=(Brain const & other) {
	
	std::cout << "Copy assignment Brain operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other.getIdea(i);
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

std::string	Brain::getIdea(int index) const {

	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	else {
		
		std::cerr << "Error : std::string Brain::getIdea(int index) : index " << index << " out of bound" << std::endl;
		return ("");
	}
}

/*-----------------------------------------------------------------|Getters|--*/

/*--|Setters|-----------------------------------------------------------------*/

void	Brain::setIdea(int index, std::string idea) {

	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else
		std::cerr << "Error : void Brain::setIdea(int index) : index " << index << " out of bound" << std::endl;
}

/*-----------------------------------------------------------------|Setters|--*/
