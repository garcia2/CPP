/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 17:35:06 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

MateriaSource::MateriaSource(void) {
	
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {

		this->_source[i] = NULL;
	}
}	// Cannonical

MateriaSource::MateriaSource(MateriaSource const & other) {
	
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = other; // Be careful to properly overload the '=' operator for this to work
	
	return;
}	// Cannonical

MateriaSource::~MateriaSource(void) {
	
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {

		if (this->_source[i] != NULL) {

			delete this->_source[i];
		}
	}
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	MateriaSource::learnMateria(AMateria* m) {

	for (int i = 0; i < 4; i++) {

		if (this->_source[i] == NULL) {

			// this->_source[i] = m->clone();
			this->_source[i] = m;
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {

		if (this->_source[i] != NULL && this->_source[i]->getType().compare(type) == 0){

			return (this->_source[i]->clone());
		}
	}
	return (NULL);
}

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Protected|-------------------------------------------*/

/*-------------------------------------------|Object functions :: Protected|--*/


/*--|Object functions :: Private|---------------------------------------------*/

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Protected|--------------------------------------------*/

/*--------------------------------------------|Class functions :: Protected|--*/


/*--|Class functions :: Private|----------------------------------------------*/

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Operators Overload|------------------------------------------------------*/

MateriaSource &	MateriaSource::operator=(MateriaSource const & other) {
	
	std::cout << "Copy assignment MateriaSource operator called" << std::endl;
	if (this != &other) {
		
		// this->_param = rhs.getParam();
		// ...
		for (int i = 0; i < 4; i++) {

			if (this->_source[i] != NULL) {

				delete this->_source[i];
				this->_source[i] = NULL;
			}
			if (other._source[i] != NULL) {

				this->_source[i] = other._source[i]->clone();
			}
		}
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/



/*--|Getters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

/*-----------------------------------------------------------------|Setters|--*/



/*--|Class Attributes|--------------------------------------------------------*/

/*--------------------------------------------------------|Class Attributes|--*/
