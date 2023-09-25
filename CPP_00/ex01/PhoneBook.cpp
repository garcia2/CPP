/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:49:01 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 14:53:46 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor & Destructors

PhoneBook::PhoneBook(void) : _nextIndex(0), _size(0) {

	//std::cout << "PhoneBook contructor called" << std::endl;
}
		
PhoneBook::~PhoneBook(void) {

	//std::cout << "PhoneBook destructor called" << std::endl;	
}


// Object functions

// Object functions :: Public

void	PhoneBook::add_contact(void) {

	std::string	input;
	Contact		contact;

	std::cout << "Adding new contact. . ." << std::endl;
	
	contact.setIndex(this->_nextIndex);
	
	input = PhoneBook::getInput("Input first name : ");
	contact.setFirstName(input);
	
	input = PhoneBook::getInput("Input last name : ");
	contact.setLastName(input);
	
	input = PhoneBook::getInput("Input nickname : ");
	contact.setNickName(input);
	
	input = PhoneBook::getInputPhoneNumber();
	contact.setPhoneNumber(input);

	input = PhoneBook::getInput("Input his darkest secret : ");
	contact.setDarkestSecret(input);
	
	this->_contacts[this->_nextIndex] = contact;
	this->incrementNextIndex();
}

void	PhoneBook::fill(void) {

	std::cout << "Filling your phonebook with some ramdom guys. . ." << std::endl;
	this->_contacts[0] = Contact(0 ,"Dylan", "Barthet", "Didou des calanques", "09873829", "Danse la panceta");
	this->_contacts[1] = Contact(1 ,"Ines", "Houdin", "Soso maness", "456789876", "Aime les huitres");
	this->_contacts[2] = Contact(2 ,"Ramzi", "Remini", "OUI", "0987", "Score de 9870 sur Guitar Hero");
	this->_contacts[3] = Contact(3 ,"Mathieu", "Rigal", "Petite sasa", "1234", "Fan du PSG (la hchouma)");
	this->_contacts[4] = Contact(4 ,"Marianne", "Arsenault", "PTDR T KI ?", "8786688", "A porter un pull Wankil a son mariage");
	this->_contacts[5] = Contact(5 ,"Irene", "Stuart", "Didou des calanques", "111111111", "A voté le Z (la hchouma * 1000)");
	this->_contacts[6] = Contact(6 ,"Regis", "Leclere", "Le Regis prefere de ton Regis prefere", "0466759897", "Box Box...");
	this->_contacts[7] = Contact(7 ,"Coline", "Trouve", "Coco Caline", "0630745787", "a jouer dans Aladin 2");
	this->_size = 8;
}

void	PhoneBook::printContactsLine(int padding) const {

	PhoneBook::printSeparationLine(padding);
	Contact::printFirstLine(padding);
	PhoneBook::printSeparationLine(padding);
	for (int i = 0; i < this->_size; i++) {
		
		this->_contacts[i].printLine(padding);
	}
	PhoneBook::printSeparationLine(padding);
}

// Object functions :: Private

void	PhoneBook::incrementNextIndex(void) {
	
	if (this->_nextIndex == 7)
		this->_nextIndex = 0;
	else
		this->_nextIndex++;
	if (this->_size < 8)
		this->_size++;
}


// Class functions

// Class functions :: Public

int	PhoneBook::isValidNumber(std::string str) {
	
	if (str.length() == 0)
		return (0);
	for (size_t i = 0; i < str.length() ; i++) {
		
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}


// Class functions :: Private

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

void	PhoneBook::printSeparationLine(int padding) {
	
	for (int i = 0; i < padding * 4 + 5; i++)
		std::cout << "-";
	std::cout << std::endl;
}


// Getters

Contact	PhoneBook::getContactById(int id) const {
	
	return (this->_contacts[id]);
}

int	PhoneBook::getSize() const {

	return (this->_size);
}