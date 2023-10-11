/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 11:50:02 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*--|Constructors & Destructors|----------------------------------------------*/

Harl::Harl(void) {
	
	return;
}	// Cannonical

Harl::~Harl(void) {
	
	return;
}	// Cannonical

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Harl::complain( std::string level ) {
	
	for (int i = 0; i < Harl::nbLevels; i++)
	{
		if (level.compare(Harl::complainSList[i]) == 0) {

			std::cout << "[ " << level << " ]" << std::endl;
			(this->*Harl::complainFList[i])();
			return ;
		}
	}
	std::cerr << "Harl : Error : \"" << level << "\" is not a valid level" << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/


/*--|Object functions :: Private|---------------------------------------------*/

void	Harl::debug(void) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;; 
	std::cout << "I really do !" << std::endl;
}

void	Harl::info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
}


void	Harl::warning(void) {
	
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

/*---------------------------------------------|Object functions :: Private|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

int	Harl::_getNbLevels() {

	return (Harl::nbLevels);
}

const std::string*	Harl::_getComplainSList() {

	return (Harl::complainSList);
}

/*-----------------------------------------------|Class functions :: Public|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int	const	Harl::nbLevels = 4;

void	(Harl::*Harl::complainFList[])() = {
	
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error,
};

std::string const Harl::complainSList[] = {
	
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

/*--------------------------------------------------------|Class Attributes|--*/
