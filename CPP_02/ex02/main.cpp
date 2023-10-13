/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:02:38 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/12 12:04:27 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main( void ) {
	
	Fixed 		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " <<  a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl;
	std::cout << "b = " << b << std::endl;
	
	std::cout << "a + b =  " << (a + b) << std::endl;
	std::cout << "a - b =  " << (a - b) << std::endl;
	std::cout << "a * b =  " << (a * b) << std::endl;
	std::cout << "a / b =  " << (a / b) << std::endl;
	std::cout << "b / a =  " << (b / a) << std::endl;
	
	std::cout << std::endl;
	Fixed	c(0);
	std::cout << "b / 0 =  " << (b / c) << std::endl;
	
	std::cout << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	
	return (0);
}