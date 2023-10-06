/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:35:29 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 14:59:02 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include "ICharacter.hpp"

class AMateria {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes
		std::string	_type;

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		AMateria(std::string const & type);
		AMateria(AMateria const & other);	// Cannonical
		virtual ~AMateria(void);						// Cannonical

		// Functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		// Operators overload
		AMateria &	operator=(AMateria const & other); // Cannonical

		// Getters
		std::string const & getType() const; //Returns the materia type

		// Setters

};