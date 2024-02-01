/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 11:19:24 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

	private:
		
		// Attributes
		int			_index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string	_darkestSecret;

		// Functions
		static std::string	_getTruncatedArg(std::string str, int padding);


	public:

		// Constructors & Destructors
		Contact(void);
		Contact(int index,std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		~Contact(void);
		
		// Functions
		void		printLine(int	padding) const;
		void		printList(void) const;
		static void	printFirstLine(int padding);

		// Getters
		int			getIndex(void) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhoneNumber(void) const;

		// Setters
		void	setIndex(int index);
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);
};

#endif