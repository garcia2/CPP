/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 00:15:55 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		
		// Attributes
		int					_rawBits;
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
		float			toFloat(void) const;
		int				toInt(void) const;
		
		static Fixed&	min(Fixed& f1, Fixed& f2);
		static Fixed&	min(Fixed const & f1, Fixed const & f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static Fixed&	max(Fixed const & f1, Fixed const & f2);

		// Operators overload
		Fixed &	operator=(Fixed const & rhs); // Cannonical
		
		Fixed 	operator+(Fixed const & rhs) const;
		Fixed 	operator-(Fixed const & rhs) const;
		Fixed 	operator*(Fixed const & rhs) const;
		Fixed 	operator/(Fixed const & rhs) const;
		
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		Fixed& operator+=(const Fixed& rhs);
		Fixed& operator-=(const Fixed& rhs);
		
		// Getters
		int	getRawBits(void) const;

		// Setters
		void	setRawBits(int const raw);

};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif