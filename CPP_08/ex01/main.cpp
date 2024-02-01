/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/30 16:06:02 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"


int main(void) {

	std::cout << "	-- TEST CONSTRUCTORS & addNumber() & addNumbers() --" << std::endl;
	
	Span span(5);
	
	// span.addNumber(1); span.addNumber(2); span.addNumber(3); span.addNumber(4);

	int bigRange[6] = {1, 2, 3, 4, 5, 6};
	try {
		span.addNumbers(bigRange, 6);
	}
	catch(const std::exception& e) {
		std::cout << "span: error: " << e.what() << std::endl;
	}
	

	int	range1[4] = {1, 2, 3, 4};
	span.addNumbers(range1, 4);

	Span sp2(span);
	Span sp3 = span;
	Span sp7(5);

	span.addNumber(5);
	sp2.addNumber(6);
	sp3.addNumber(7);
	sp7.addNumbers(span.getNumbers());
	
	span.toPrint("span");
	sp2.toPrint("sp2");
	sp3.toPrint("sp3");
	sp7.toPrint("sp7");

	std::cout << std::endl;

	/* ************************************************************************** */

	std::cout << "	-- TEST ERROR CASES with addNumber() at _maxSize --" << std::endl;

	try {
		span.addNumber(0);
	} 
	catch (std::exception & e){
		std::cout << "span: error: " << e.what() << std::endl;
	}

	try {
		sp2.addNumber(0);
	} 
	catch (std::exception & e){
		std::cout << "span: error: " << e.what() << std::endl;
	}

	try {
		sp3.addNumber(0);
	} 
	catch (std::exception & e){
		std::cout << "span: error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	/* ************************************************************************** */

	std::cout << "	-- TEST shortestSpan() & longestSpan() --" << std::endl;

	Span sp4(5);
	
	sp4.addNumber(0); sp4.addNumber(32); sp4.addNumber(33); sp4.addNumber(128); sp4.addNumber(128);

	sp4.toPrint("sp4");
	std::cout << "Shortest sp4's span is " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest sp4's span is " << sp4.longestSpan() << std::endl;

	std::cout << std::endl;

	/* ************************************************************************** */

	std::cout << "	-- TEST ERROR CASES with shortestSpan() & longestSpan() --" << std::endl;

	Span sp5(12);
	
	sp5.addNumber(1);
	
	sp5.toPrint("sp5");
	
	try {
		sp5.shortestSpan();
	} 
	catch (std::exception & e){
		std::cout << "span: error: " << e.what() << std::endl;
	}

	try {
		sp5.longestSpan();
	} 
	catch (std::exception & e){
		std::cout << "span: error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	/* ************************************************************************** */

	int	size = 20000;

	std::cout << "	-- TEST shortestSpan() & longestSpan() with " << size << " RANDOM VALUES --" << std::endl;

	Span sp6(size);
	
	std::cout << "Filling sp6 with " << size << " numbers. . ." << std::endl;
	
	srand(time(NULL));
	for (int i = 0; i < size; i++) {

		sp6.addNumber(rand());
	}
	
	std::cout << "Done. sp6's size = " << sp6.getSize() << std::endl;

	std::cout << "Shortest sp6's span is " << sp6.shortestSpan() << std::endl;
	std::cout << "Longest sp6's span is " << sp6.longestSpan() << std::endl;

	/* ************************************************************************** */

	return (0);
}
