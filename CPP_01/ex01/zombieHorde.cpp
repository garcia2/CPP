/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:04:24 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 18:48:55 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {

	Zombie*	zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++) {

		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}