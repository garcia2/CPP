/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 15:53:50 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

#define MAX_VAL 760

int main(int, char**) {
	
	Array<int> numbers(MAX_VAL);
	
	int* mirror = new int[MAX_VAL];
	
	srand(time(NULL));
	
	for (int i = 0; i < MAX_VAL; i++) {
		
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
		std::cout << "mirror[" << i << "]  = " << mirror[i] << std::endl;
		std::cout << std::endl;
	}
	
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) {

		if (mirror[i] != numbers[i]) {
			
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	
	try {
		
		numbers[-2] = 0;
	} catch(const std::exception& e) {
		
		std::cerr << e.what() << '\n';
	}
	
	try {
		
		numbers[MAX_VAL] = 0;
	} catch(const std::exception& e) {
		
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++){
		
		numbers[i] = rand();
	}
	
	delete [] mirror;//
	return 0;
}
