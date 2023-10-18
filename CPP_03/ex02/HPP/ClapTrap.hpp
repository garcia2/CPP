/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/18 17:10:34 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	private:
		
		// Attributes
		static unsigned int	_hitPointsRef;
		static unsigned int	_energyPointsRef;
		static unsigned int	_attackDamagesRef;

		// Functions

		// Hidden Constructors

	protected:
		
		// Attributes
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamages;

		// Functions

		// Hidden Constructor (except for inheritance)
		ClapTrap(void);						// Cannonical
	
	public:

		// Constructors & Destructors
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);		// Cannonical
		~ClapTrap(void);					// Cannonical

		// Functions
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			toPrint() const;

		// Operators overload
		ClapTrap &	operator=(ClapTrap const & rhs); // Cannonical

		// Getters
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamages() const;

		// Setters
		void	setAttackDamages(unsigned int attackDamages);

};

#endif