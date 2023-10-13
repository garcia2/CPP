/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:02:38 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/12 15:07:11 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	
	std::cout << std::endl;
	std::cout << "################################" << std::endl;
	std::cout << "##### EXEMPLES OF P IN ABC #####" << std::endl;
	std::cout << "################################" << std::endl << std::endl;

	Point a1(0, 0), b1(14, 0), c1(2, 3), p1(2, 1);
	
	if (bsp(a1, b1, c1, p1) == 1)
		std::cout << "Good ! P is in ABC" << std::endl;
	else
		std::cout << "Not good. P is not in ABC and it should be" << std::endl;
	std::cout << std::endl;

	Point a2(0, 0), b2(6, 0), c2(3, 5), p2(3, 2);
	
	if (bsp(a2, b2, c2, p2) == 1)
		std::cout << "Good ! P is in ABC" << std::endl;
	else
		std::cout << "Not good. P is not in ABC and it should be" << std::endl;
	std::cout << std::endl;

	Point a7(0.36f, 2.23f), b7(-2.82f, -2.43f), c7(3.18f, -1.51f), p7(0.14f, -0.99f);
	
	if (bsp(a7, b7, c7, p7) == 1)
		std::cout << "Good ! P is in ABC" << std::endl;
	else
		std::cout << "Not good. P is not in ABC and it should be" << std::endl;
	std::cout << std::endl;


	Point a3(0, 0), b3(5, 0), c3(0, 4), p3(2, 2);
	
	if (bsp(a3, b3, c3, p3) == 1)
		std::cout << "Good ! P is in ABC" << std::endl;
	else
		std::cout << "Not good. P is not in ABC and it should be" << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "####################################" << std::endl;
	std::cout << "##### EXEMPLES OF P NOT IN ABC #####" << std::endl;
	std::cout << "####################################" << std::endl << std::endl;
	
	Point a4(0, 0), b4(4, 0), c4(2, 3), p4(3, 4);
	
	if (bsp(a4, b4, c4, p4) == 0)
		std::cout << "Good ! P is not in ABC" << std::endl;
	else
		std::cout << "Not good. P is in ABC and it shouldn't be" << std::endl;
	std::cout << std::endl;
	

	Point a5(0, 0), b5(6, 0), c5(3, 5), p5(7, 3);
	
	if (bsp(a5, b5, c5, p5) == 0)
		std::cout << "Good ! P is not in ABC" << std::endl;
	else
		std::cout << "Not good. P is in ABC and it shouldn't be" << std::endl;
	std::cout << std::endl;


	Point a6(0, 0), b6(5, 0), c6(0, 5), p6(1, 5);
	
	if (bsp(a6, b6, c6, p6) == 0)
		std::cout << "Good ! P is not in ABC" << std::endl;
	else
		std::cout << "Not good. P is in ABC and it shouldn't be" << std::endl;
	std::cout << std::endl;

	Point a8(-3.36f, -1.77f), b8(0.82f, 2.17f), c8(3.7f, -0.83f), p8(-0.26f, -3.59f);
	
	if (bsp(a8, b8, c8, p8) == 0)
		std::cout << "Good ! P is not in ABC" << std::endl;
	else
		std::cout << "Not good. P is in ABC and it shouldn't be" << std::endl;
	std::cout << std::endl;


	return (0);
}