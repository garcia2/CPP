/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 01:34:41 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/12 15:09:11 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point const	getVector(Point const a, Point const b) {

	float const x = b.getX().toFloat() - a.getX().toFloat();
	float const y = b.getY().toFloat() - a.getY().toFloat();

	return (Point(x, y));
}

float getVectorialProduct(Point const vA, Point const vB) {

	return ( (vA.getX().toFloat() * vB.getY().toFloat()) - (vA.getY().toFloat() * vB.getX().toFloat()) );
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	std::cout << "A = [" << a.getX().toFloat() << ";" << a.getY().toFloat() << "]" << std::endl;
	std::cout << "B = [" << b.getX().toFloat() << ";" << b.getY().toFloat() << "]" << std::endl;
	std::cout << "C = [" << c.getX().toFloat() << ";" << c.getY().toFloat() << "]" << std::endl;
	std::cout << "P = [" << point.getX() << ";" << point.getY() << "]" << std::endl;

	Point b1(14, 4);
	
	Point const	vectorAB = getVector(a, b);
	Point const	vectorBC = getVector(b, c);
	Point const	vectorCA = getVector(c, a);
	Point const	vectorPA = getVector(point, a);
	Point const	vectorPB = getVector(point, b);
	Point const	vectorPC = getVector(point, c);

	std::cout << "Vector AB = [" << vectorAB.getX().toFloat() << ";" << vectorAB.getY().toFloat() << "]" << std::endl;
	std::cout << "Vector BC = [" << vectorBC.getX().toFloat() << ";" << vectorBC.getY().toFloat() << "]" << std::endl;
	std::cout << "Vector CA = [" << vectorCA.getX().toFloat() << ";" << vectorCA.getY().toFloat() << "]" << std::endl;
	std::cout << "Vector PA = [" << vectorPA.getX().toFloat() << ";" << vectorPA.getY().toFloat() << "]" << std::endl;
	std::cout << "Vector PB = [" << vectorPB.getX().toFloat() << ";" << vectorPB.getY().toFloat() << "]" << std::endl;
	std::cout << "Vector PC = [" << vectorPC.getX().toFloat() << ";" << vectorPC.getY().toFloat() << "]" << std::endl;
	
	float const vectorialProductABxPA = getVectorialProduct(vectorAB, vectorPA);
	float const vectorialProductBCxPB = getVectorialProduct(vectorBC, vectorPB);
	float const vectorialProductCAxPC = getVectorialProduct(vectorCA, vectorPC);

	std::cout << "Vectorial product AB * PA = " << vectorialProductABxPA << std::endl;
	std::cout << "Vectorial product BC * PB = " << vectorialProductBCxPB << std::endl;
	std::cout << "Vectorial product CA * PC = " << vectorialProductCAxPC << std::endl;  
	if ((vectorialProductABxPA >= 0) && (vectorialProductBCxPB >= 0) && (vectorialProductCAxPC >= 0))
		return (1);
	else if ((vectorialProductABxPA <= 0) && (vectorialProductBCxPB <= 0) && (vectorialProductCAxPC <= 0))
		return (1);
	else
		return (0);
}
