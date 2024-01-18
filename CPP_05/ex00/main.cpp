/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 20:00:51 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main( void )
{
	
	Bureaucrat boss("LE BOSS", 1);
	Bureaucrat looser("LE LOOSER", 150);
	try 
	{
		Bureaucrat fraude("LA FRAUDE", 151);
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		
		std::cout << "EXCEPTION: '" << e.what() << "'" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		
		std::cout << "EXCEPTION: '" << e.what() << "'" << std::endl;
	}
    try {

        std::cout << std::endl << boss << std::endl;
		boss.decrementGrade();
		
		std::cout << std::endl << boss << std::endl;
        boss.incrementGrade();

		std::cout << std::endl << boss << std::endl;
        boss.incrementGrade();
        
		std::cout << std::endl << boss << std::endl;
		boss.decrementGrade();
    } catch (Bureaucrat::GradeTooHighException & e) {
        
		std::cout << "EXCEPTION: '" << e.what() << "'" << std::endl;
    }

	try {

        std::cout << std::endl << looser << std::endl;
		looser.incrementGrade();
		
		std::cout << std::endl << looser << std::endl;
        looser.decrementGrade();

		std::cout << std::endl << looser << std::endl;
        looser.decrementGrade();

		std::cout << std::endl << looser << std::endl;
		looser.incrementGrade();
    } catch (Bureaucrat::GradeTooLowException & e) {
		
        std::cout << "EXCEPTION: '" << e.what() << "'" << std::endl;
    }
	std::cout << std::endl;
    return (0);
}
