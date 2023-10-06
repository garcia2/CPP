/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/27 16:16:14 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	private:
		
		// Attributes
		static void					(Harl::*complainFList[])();		
		static int const			nbLevels;
		static std::string const	complainSList[];


		// Functions
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:

		// Constructors & Destructors
		Harl(void);
		~Harl(void);

		// Functions
		void						complain( std::string level );
		static	int					_getNbLevels();
		static	const std::string*	_getComplainSList();

		// Operators overload

		// Getters

		// Setters

};

#endif
