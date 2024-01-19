/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/19 16:29:26 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Serializer.hpp"

void	printData(Data *data) {

	std::cout << "	name: " << data->name << std::endl;
	std::cout << "	lastname: " << data->lastname << std::endl;
	std::cout << "	age: " << data->age << std::endl;
	std::cout << "	is she/he cool ? " << (data->isCool ? "Hell yeah" : "Not that much but it's ok") << std::endl;
}

int main(void) {

	Data	data("Garcia", "Nicolas", 26, true);
	
	std::cout << "Original data - " << std::endl;
	printData(&data);
	
	std::cout << std::endl << "Serializing. . ." << std::endl;
	uintptr_t	serializedData = Serializer::serialize(&data);
	std::cout << "serialized data : " << serializedData << std::endl;

	std::cout << std::endl << "Deserializing. . ." << std::endl;	
	Data *	reData = Serializer::deserialize(serializedData);
	std::cout << "Deserialized data -" << std::endl;
	printData(reData);
	
	return (0);
}