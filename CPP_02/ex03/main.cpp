/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:02:38 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 09:22:06 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	
	Point a1(0, 0), b1(14, 0), c1(2, 3), p1(2, 1);

	std::cout << "a1 = [" << a1.getFloatX() << ";" << a1.getFloatY() << "]" << std::endl;
	std::cout << "b1 = [" << b1.getFloatX() << ";" << b1.getFloatY() << "]" << std::endl;
	std::cout << "c1 = [" << c1.getFloatX() << ";" << c1.getFloatY() << "]" << std::endl;
	std::cout << "p1 = [" << p1.getFloatX() << ";" << p1.getFloatY() << "]" << std::endl;
	if (bsp(a1, b1, c1, p1) == 1)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;

	Point a2(0, 0), b2(6, 0), c2(3, 5), p2(3, 2);
	
	if (bsp(a2, b2, c2, p2) == 1)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;

	Point a3(0, 0), b3(5, 0), c3(0, 4), p3(2, 2);
	
	if (bsp(a3, b3, c3, p3) == 1)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;
	
	Point a4(0, 0), b4(4, 0), c4(2, 3), p4(3, 4);
	
	if (bsp(a4, b4, c4, p4) == 0)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;
	
	Point a5(0, 0), b5(6, 0), c5(3, 5), p5(7, 3);
	
	if (bsp(a5, b5, c5, p5) == 0)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;

	Point a6(0, 0), b6(5, 0), c6(0, 5), p6(1, 5);
	
	if (bsp(a6, b6, c6, p6) == 0)
		std::cout << "Good !" << std::endl;
	else
		std::cout << "Not good." << std::endl;
	std::cout << std::endl;
	return (0);
}