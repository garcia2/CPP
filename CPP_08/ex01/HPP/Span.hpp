/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/30 14:06:57 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


class Span {

	private:
		
		// Attributes
		unsigned int		_maxSize;
		std::vector<int>	_numbers;

		// Functions

		// Hidden Constructor
		Span(void);					// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Span(unsigned int N);
		Span(Span const & other);	// Cannonical
		virtual ~Span(void);		// Cannonical

		// Functions
		void			toPrint(const std::string & name) const;
		void			addNumber(int number);
		void			addNumbers(int numbers[], unsigned int size);
		void			addNumbers(std::vector<int> numbers);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		// Operators overload
		Span &	operator=(Span const & other); // Cannonical

		// Getters
		size_t				getSize(void) const;
		std::vector<int>	getNumbers(void) const;

		// Setters

		// Exceptions

};

#endif