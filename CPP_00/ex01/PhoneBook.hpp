/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:30:24 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 00:10:33 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

	private:
	
		Contact	_contacts[8];
		int		_nextIndex;
		int		_size;

		void				incrementNextIndex(void);
		static std::string	getInput(std::string message);
		static std::string	getInputPhoneNumber(void);
	
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void			add_contact(void);
		void			printContactsLine(int padding);
		static int		isValidNumber(std::string str);
		Contact			getContactById(int id);
		int				getSize();
	
};
