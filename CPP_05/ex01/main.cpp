/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 20:14:14 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat	boss("LE BOSS", 1);
	Bureaucrat	looser("LE LOOSER", 3);
	Form		superContract("The super contract", 2, 1);
	
	std::cout << std::endl;

	std::cout << boss << std::endl;
	std::cout << looser << std::endl;
	std::cout << superContract << std::endl;
	
	std::cout << std::endl;

	looser.signForm(superContract);
	boss.signForm(superContract);
	
	std::cout << std::endl;
    return (0);
}