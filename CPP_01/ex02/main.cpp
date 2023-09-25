/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:01:29 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 19:13:29 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {

	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Address of str               : [" << &str << "]" << std::endl;
	std::cout << "Address stocked in stringPTR : [" << stringPTR << "]" << std::endl;
	std::cout << "Address stocked in stringREF : [" << &stringREF << "]" << std::endl;
	std::cout << std::endl;
	std::cout << "Value of str               : \"" << str << "\"" << std::endl;
	std::cout << "Value pointed by stringPTR : \"" << *stringPTR << "\"" << std::endl;
	std::cout << "Value pointed by stringREF : \"" << stringREF << "\"" << std::endl;
	return (0);
}