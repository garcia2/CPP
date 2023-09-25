/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:51:11 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 17:57:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie* z1 = newZombie("Carlos");
	z1->announce();
	delete z1;
	
	randomChump("Fabrice");
	
	return (0);
}