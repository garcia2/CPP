/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/25 13:21:00 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <cstdio>
#include <cmath>

class ScalarConverter {

	private:
		
		// Attributes
		enum eType {
			INT,
			FLOAT,
			CHAR,
			DOUBLE,
		};

		// Functions
		static void		printChar(char c, bool impossible);
		static void		printInt(int number, bool impossible);
		static void		printFloat(float number, bool impossible);
		static void		printDouble(double number, bool impossible);
		static bool		isDoubleRound(double number);
		static bool		isFloatRound(float number);
		static char		strToChar(const std::string & str);
		static int		strToInt(const std::string & str);
		static float	strToFloat(const std::string & str);
		static double	strToDouble(const std::string & str);
		static void		convertChar(char c);
		static void		convertInt(int number);
		static void		convertFloat(float number);
		static void		convertDouble(double number);
		static int		whatType(const std::string & str);

		// Hidden Constructor
		ScalarConverter(ScalarConverter const & other);	// Cannonical
		ScalarConverter(void);							// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		virtual ~ScalarConverter(void);				// Cannonical

		// Functions
		static void	convert(const std::string & input); 

		// Operators overload
		ScalarConverter &	operator=(ScalarConverter const & other); // Cannonical

		// Getters

		// Setters

		// Exceptions
		
};

#endif