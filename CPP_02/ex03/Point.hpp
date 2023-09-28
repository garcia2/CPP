/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 09:24:29 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
# define Point_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point {

	private:
		
		// Attributes
		Fixed const	_x;
		Fixed const	_y;

		// Functions

	public:

		// Constructors & Destructors
		Point(void);				// Cannonical
		Point(float const x, float const y);
		Point(Point const & src);	// Cannonical
		~Point(void);				// Cannonical

		// Functions
		float	getFloatX(void) const;
		float	getFloatY(void) const;

		// Operators overload
		Point &	operator=(Point const & rhs); // Cannonical

		// Getters
		Fixed const	getX(void) const;
		Fixed const	getY(void) const;

		// Setters

};

#endif