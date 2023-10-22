/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 16:57:53 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		
		// Attributes
		AMateria*	_source[4];;

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		MateriaSource(MateriaSource const & other);	// Cannonical
		MateriaSource(void);						// Cannonical
		virtual ~MateriaSource(void);				// Cannonical

		// Functions
		void learnMateria(AMateria* m);
    	AMateria* createMateria(std::string const & type);

		// Operators overload
		MateriaSource &	operator=(MateriaSource const & other); // Cannonical

		// Getters

		// Setters

};

#endif