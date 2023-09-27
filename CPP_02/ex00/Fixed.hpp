/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/27 17:02:48 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		
		// Attributes
		int					rawBits;
		static int const	_nbFractionalBits;
		// Functions

	public:

		// Constructors & Destructors
		Fixed(void);				// Cannonical
		Fixed(Fixed const & src);	// Cannonical
		~Fixed(void);				// Cannonical

		// Functions

		// Operators overload
		Fixed &	operator=(Fixed const & rhs); // Cannonical

		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

};

#endif