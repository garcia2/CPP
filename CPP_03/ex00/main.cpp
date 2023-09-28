/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:53:44 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/28 14:13:02 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

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

	ClapTrap billy("Billy");	std::cout << std::endl;
	ClapTrap bob("Bob");		std::cout << std::endl;
	
	billy.toPrint();			std::cout << std::endl;
	bob.toPrint();				std::cout << std::endl;
	
	main_attack(billy, bob);
	
	bob.setAttackDamages(4);
	main_attack(bob, billy);
	
	bob.beRepaired(400);
	billy.setAttackDamages(9000);
	main_attack(billy, bob);
	bob.beRepaired(400);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	main_attack(billy, bob);
	std::cout << std::endl;
	
	return (0);
}