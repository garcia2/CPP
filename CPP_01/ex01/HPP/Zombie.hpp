/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 14:52:36 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	private:
		
		// Attributes
		std::string	_name;
		
		// Functions

	public:

		// Constructors & Destructors
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		// Functions
		void	announce(void);
		
		// Getters

		// Setters
		void	setName(std::string name);

};

Zombie*	zombieHorde(int N, std::string name);

#endif