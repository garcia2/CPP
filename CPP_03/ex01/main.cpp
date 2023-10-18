/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:53:44 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/18 12:45:47 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap Samuel("Samuel");	std::cout << std::endl;
	ScavTrap Jimmy("Jimmy"); 	std::cout << std::endl;
	
	billy.toPrint();			std::cout << std::endl;
	bob.toPrint();				std::cout << std::endl;
	Samuel.toPrint();			std::cout << std::endl;
	Jimmy.toPrint();			std::cout << std::endl;

	main_attack(Samuel, Jimmy);
	main_attack(billy, Samuel);
	main_attack(Jimmy, bob);
	Jimmy.beRepaired(45);

	std::cout << std::endl;

	Samuel.guardGate();

	std::cout << std::endl;
	
	return (0);
}