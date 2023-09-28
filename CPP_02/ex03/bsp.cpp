/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 01:34:41 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 09:27:46 by nicolas          ###   ########.fr       */
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

	// std::cout << "a = [" << a.getX() << ";" << a.getY() << "]" << std::endl;
	// std::cout << "b = [" << b.getX() << ";" << b.getY() << "]" << std::endl;
	// std::cout << "c = [" << c.getX() << ";" << c.getY() << "]" << std::endl;
	// std::cout << "p = [" << point.getX() << ";" << point.getY() << "]" << std::endl;

	Point b1(14, 4);
	
	Point const	vectorAB = getVector(a, b);
	Point const	vectorBC = getVector(b, c);
	Point const	vectorCA = getVector(c, a);
	Point const	vectorPA = getVector(point, a);
	Point const	vectorPB = getVector(point, b);
	Point const	vectorPC = getVector(point, c);

	// std::cout << "vector AB = [" << vectorAB.getX().toFloat() << ";" << vectorAB.getY().toFloat() << "]" << std::endl;
	// std::cout << "vector BC = [" << vectorBC.getX().toFloat() << ";" << vectorBC.getY().toFloat() << "]" << std::endl;
	// std::cout << "vector CA = [" << vectorCA.getX().toFloat() << ";" << vectorCA.getY().toFloat() << "]" << std::endl;
	// std::cout << "vector PA = [" << vectorPA.getX().toFloat() << ";" << vectorPA.getY().toFloat() << "]" << std::endl;
	// std::cout << "vector PB = [" << vectorPB.getX().toFloat() << ";" << vectorPB.getY().toFloat() << "]" << std::endl;
	// std::cout << "vector PC = [" << vectorPC.getX().toFloat() << ";" << vectorPC.getY().toFloat() << "]" << std::endl;
	
	float const vectorialProductABxPA = getVectorialProduct(vectorAB, vectorPA);
	float const vectorialProductBCxPB = getVectorialProduct(vectorBC, vectorPB);
	float const vectorialProductCAxPC = getVectorialProduct(vectorCA, vectorPC);

	// std::cout << "vectorial product AB * PA = " << vectorialProductABxPA << std::endl;
	// std::cout << "vectorial product BC * PB = " << vectorialProductBCxPB << std::endl;
	// std::cout << "vectorial product CA * PC = " << vectorialProductCAxPC << std::endl;  
	if ((vectorialProductABxPA >= 0) && (vectorialProductBCxPB >= 0) && (vectorialProductCAxPC >= 0))
		return (1);
	else if ((vectorialProductABxPA <= 0) && (vectorialProductBCxPB <= 0) && (vectorialProductCAxPC <= 0))
		return (1);
	else
		return (0);
}
