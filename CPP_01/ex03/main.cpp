/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:19:48 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 15:08:54 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

// int main(void) {

// 	Weapon	sword("sword");
// 	Weapon	bigFatTank("big fat tank");
// 	Weapon	article493("article 49.3");
// 	HumanA	hA("Boris", sword);
// 	HumanB	hB("Patrice");
	
// 	hA.attack();
// 	hB.attack();
// 	//hA.setWeapon(bigFatTank);
// 	hA.attack();
// 	hB.setWeapon(article493);
// 	hB.attack();
// 	article493.setType("article 49.3 (encore ?!)");
// 	hB.attack();
// 	sword.setType("article 49.3 (HEIN  ?!?!)");
// 	hA.attack();
// 	return (0);
// }

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}