/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 03:00:03 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	power(int &	x){

	x = x * x;
}

template<typename T>
void	printArray(T & element){

	std::cout << element << "; ";
}

void modifyString(std::string& str) {
    str.append("_NICO");
}

int	main(void) {

	int array1[4] = {1, 2 ,3, 4};
	std::cout << "array1 => {"; iter(array1, 4, &printArray<int>); std::cout << "}" << std::endl;
	iter(array1, 4, &power);
	std::cout << "array1 => {"; iter(array1, 4, &printArray<int>); std::cout << "}" << std::endl;

	std::cout << std::endl;

	std::string array2[3] = {"Yo", "Salut" ,"Wesh"};
	std::cout << "array2 => {"; iter(array2, 3, &printArray<std::string>); std::cout << "}" << std::endl;
	iter(array2, 3, &modifyString);
	std::cout << "array2 => {"; iter(array2, 3, &printArray<std::string>); std::cout << "}" << std::endl;

	return (0);
}