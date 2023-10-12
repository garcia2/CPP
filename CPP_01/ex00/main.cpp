/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:51:11 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 14:58:46 by nigarcia         ###   ########.fr       */
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