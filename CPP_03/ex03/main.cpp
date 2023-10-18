/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:53:44 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/18 13:07:52 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	main_attack(ClapTrap& attack, ClapTrap& victim) {

	if (attack.getEnergyPoints() > 0) {
		
		attack.attack(victim.getName());
		victim.takeDamage(attack.getAttackDamages());
	}
	else {
		attack.attack(victim.getName());
	}
}

int	main(void) {

								std::cout << std::endl;
	ClapTrap billy("Billy");	std::cout << std::endl;
	ClapTrap bob("Bob"); 		std::cout << std::endl;
	ScavTrap samuel("Samuel");	std::cout << std::endl;
	ScavTrap jimmy("Jimmy"); 	std::cout << std::endl;
	FragTrap tom("Tom");		std::cout << std::endl;
	FragTrap paul("Paul"); 		std::cout << std::endl;
	
	billy.toPrint();			std::cout << std::endl;
	bob.toPrint();				std::cout << std::endl;
	samuel.toPrint();			std::cout << std::endl;
	jimmy.toPrint();			std::cout << std::endl;
	tom.toPrint();				std::cout << std::endl;
	paul.toPrint();				std::cout << std::endl;

	main_attack(samuel, jimmy);
	main_attack(billy, samuel);
	main_attack(jimmy, bob);
	jimmy.beRepaired(45);
	samuel.guardGate();

	std::cout << std::endl;

	main_attack(tom, paul);
	main_attack(billy, paul);
	main_attack(tom, paul);
	main_attack(tom, samuel);
	main_attack(jimmy, paul);
	paul.beRepaired(70);
	tom.highFive();
	
	std::cout << std::endl;
	
	DiamondTrap pit("Pit");		std::cout << std::endl;
	pit.toPrint();				std::cout << std::endl;
	pit.whoAmI();				std::cout << std::endl;
	
	main_attack(billy, pit);
	main_attack(samuel, pit);
	main_attack(tom, pit);
	pit.beRepaired(999999);
	main_attack(pit, billy);
	pit.guardGate();
	pit.highFive();

	std::cout << std::endl;
	
	DiamondTrap pitCpy = pit;	std::cout << std::endl;
	pitCpy.toPrint();			std::cout << std::endl;
	pitCpy.whoAmI();			std::cout << std::endl;

	return (0);
}