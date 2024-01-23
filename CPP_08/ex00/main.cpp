/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 16:26:36 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void	printVector(std::vector<T> & vector){

	typename std::vector<T>::const_iterator	it ;
	typename std::vector<T>::const_iterator	ite = vector.end();

	for (it = vector.begin(); it != ite; it++){
		
		if (it == vector.begin())
			std::cout << "vector: {" << *it;
		else
			std::cout << ", " << *it;
		
	}
	std::cout << "}" << std::endl; 
	
}

int main(void) {
	
	try {
		
		std::vector<int> vector;
		vector.push_back(1);
		vector.push_back(42);
		vector.push_back(314);
		

		printVector<int>(vector);
	
		std::vector<int>::iterator it;
		
		it = easyfind< std::vector<int> >(vector, 42);
		std::cout << *it << " found in vector" << std::endl;

		it = easyfind< std::vector<int> >(vector, 315);
		std::cout << *it << " found in vector" << std::endl;

	}	catch (std::exception & e) {

		std::cout << "easyfind: error: " << e.what() << std::endl;
	}
	
	
	
	return (0);
}
