/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:51:11 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 19:00:08 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	int	nbZombies = 10;

	Zombie*	zombies = zombieHorde(nbZombies, "Kevin");
	
	for	(int i = 0; i < nbZombies; i++) {

		zombies[i].announce();
	}

	delete [] zombies;
	return (0);
}