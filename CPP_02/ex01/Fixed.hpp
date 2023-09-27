/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/27 17:50:57 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		
		// Attributes
		int					rawBits;
		static int const	_nbFractionalBits;
		// Functions

	public:

		// Constructors & Destructors
		Fixed(void);				// Cannonical
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed(Fixed const & src);	// Cannonical
		~Fixed(void);				// Cannonical

		// Functions
		float	toFloat(void) const;
		int		toInt(void) const;

		// Operators overload
		Fixed &	operator=(Fixed const & rhs); // Cannonical

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif