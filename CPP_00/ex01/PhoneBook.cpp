/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:49:01 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 00:25:14 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nextIndex(0), _size(0) {

	//std::cout << "PhoneBook contructor called" << std::endl;
	return;
}
		
PhoneBook::~PhoneBook(void) {

	//std::cout << "PhoneBook destructor called" << std::endl;	
	return;
}

void	PhoneBook::incrementNextIndex(void) {
	
	if (this->_nextIndex == 7)
		this->_nextIndex = 0;
	else
		this->_nextIndex++;
	if (this->_size < 8)
		this->_size++;
	return;
}

void	PhoneBook::add_contact(void) {

	std::string	input;
	Contact		contact;

	std::cout << "Adding new contact. . ." << std::endl;
	
	contact.setIndex(this->_nextIndex);
	
	input = PhoneBook::getInput("Input last name : ");
	contact.setLastName(input);
	
	input = PhoneBook::getInput("Input first name : ");
	contact.setFirstName(input);
	
	input = PhoneBook::getInput("Input nickname : ");
	contact.setNickName(input);
	
	input = PhoneBook::getInputPhoneNumber();
	contact.setPhoneNumber(input);

	input = PhoneBook::getInput("Input his darkest secret : ");
	contact.setDarkestSecret(input);
	
	this->_contacts[this->_nextIndex] = contact;
	this->incrementNextIndex();
	return;	
}

Contact	PhoneBook::getContactById(int id) {
	
	return (this->_contacts[id]);
}

int	PhoneBook::isValidNumber(std::string str) {
	
	if (str.length() == 0)
		return (0);
	for (size_t i = 0; i < str.length() ; i++) {
		
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

void	PhoneBook::printContactsLine(int padding) {

	Contact::printFirstLine(padding);
	for (int i = 0; i < this->_size; i++) {

		this->_contacts[i].printLine(padding);
	}
}

std::string	PhoneBook::getInput(std::string message) {

	std::string	input;
	
	std::cout << message;
	std::getline(std::cin, input);
	while (input.length() == 0) {
		
		std::cout << "You can't leave an empty field" << std::endl;
		std::cout << message;
		std::getline(std::cin, input);
	}
	return (input);
}

std::string	PhoneBook::getInputPhoneNumber(void) {

	std::string	input;
	
	std::cout << "Input phone number : ";
	std::getline(std::cin, input);
	while (!PhoneBook::isValidNumber(input)) {

		std::cout << "This is not a valid phone number (ex: 4242424242)" << std::endl;
		std::cout << "Input phone number :";
		std::getline(std::cin, input);
	}
	return (input);
}

int	PhoneBook::getSize() {

	return (this->_size);
}