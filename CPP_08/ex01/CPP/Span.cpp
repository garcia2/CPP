/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 18:16:16 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Span::Span(unsigned int N) : _maxSize(N) {

	this->_numbers.reserve(N);
}

Span::Span(Span const & other) : _maxSize(other._maxSize), _numbers(other._numbers){ }	// Cannonical

Span::~Span(void) { }	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Span::toPrint(const std::string & name) const{

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = this->_numbers.end();

	for (it = this->_numbers.begin(); it != ite; it++){
		
		if (it == this->_numbers.begin())
			std::cout << name << ": {" << *it;
		else
			std::cout << ", " << *it;
		
	}
	std::cout << "}" << std::endl; 
}


void	Span::addNumber(int number){

	if (this->_numbers.size() == this->_maxSize)
		throw std::runtime_error("cannot add number, max_size reached");

	this->_numbers.push_back(number);
}


unsigned int	Span::shortestSpan(void) const{

	if (this->_numbers.size() <= 1)
		throw std::runtime_error("cannot find shortest span, needs two or more numbers");

	std::vector<int>	sortedNumbers = this->_numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int shortestSpan = sortedNumbers[1] - sortedNumbers[0];

	for (size_t i = 2; i < sortedNumbers.size(); i++){

		shortestSpan = std::min(shortestSpan, sortedNumbers[i] - sortedNumbers[i - 1]);
	}
	
	return (shortestSpan);
}


unsigned int	Span::longestSpan(void) const{

	if (this->_numbers.size() <= 1)
		throw std::runtime_error("cannot find longest span, needs two or more numbers");

	std::vector<int>::const_iterator minIt = std::min_element(this->_numbers.begin(), this->_numbers.end());
	std::vector<int>::const_iterator maxIt = std::max_element(this->_numbers.begin(), this->_numbers.end());
	
	return (*maxIt - *minIt);
}


/*----------------------------------------------|Object functions :: Public|--*/

/*--|Getters|-----------------------------------------------------------------*/

size_t	Span::getSize(void) const{

	return (this->_numbers.size());
}

/*-----------------------------------------------------------------|Getters|--*/

/*--|Operators Overload|------------------------------------------------------*/

Span &	Span::operator=(Span const & other) {

	if (this != &other) {
		
		this->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}

	return (*this);
}	// Cannonical

/*------------------------------------------------------|Operators Overload|--*/
