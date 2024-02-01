/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:30:24 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 11:19:53 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {

	private:
	
		// Attributes
		Contact	_contacts[8];
		int		_nextIndex;
		int		_size;

		// Functions
		void				_incrementNextIndex(void);
		static std::string	_getInput(std::string message);
		static std::string	_getInputPhoneNumber(void);
		static void			_printSeparationLine(int padding);
	
	public:

		// Constructor & Destructors
		PhoneBook(void);
		~PhoneBook(void);

		// Functions
		void			add_contact(void);
		void			printContactsLine(int padding) const;
		void			fill(void);
		static int		isValidNumber(std::string str);
	
		// Getters
		Contact			getContactById(int id) const;
		int				getSize() const;
};

#endif