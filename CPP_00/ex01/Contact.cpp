/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 00:30:47 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructors and Destructors //

Contact::Contact (void) { 
	
	//std::cout << "Contact contructor called" << std::endl;
	return;
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName) {
	
	//std::cout << "Parametric contact contructor called" << std::endl;
	this->_index = index;
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	
	return;
}

Contact::~Contact(void) {
	
	//std::cout << "Contact destructor called" << std::endl;
	return;
}

std::string	Contact::getTruncatedArg(std::string str, int padding) {

	std::string newStr;

	if ((int) str.length() > padding)
		newStr = str.substr(0, padding - 1) + ".";
	else
		newStr = str;
	return (newStr);
}
 

void	Contact::printLine(int padding) {

	std::cout << "|" << std::setw(padding) << this->_index << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_firstName, padding) << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_lastName, padding) << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_nickName, padding) << "|" << std::endl;
}

void	Contact::printFirstLine(int padding) {

	std::cout << "|" << std::setw(padding) << "Index" << "|";
	std::cout << std::setw(padding) << "first name" << "|";
	std::cout << std::setw(padding) << "last name" << "|";
	std::cout << std::setw(padding) << "nickname" << "|" << std::endl;
}

void	Contact::printList(void) {
	
	std::cout << "index          : " << this->_index << std::endl;
	std::cout << "first name     : " << this->_firstName << std::endl;
	std::cout << "last name      : " << this->_lastName << std::endl;
	std::cout << "nickname       : " << this->_nickName << std::endl;
	std::cout << "phone number   : " << this->_phoneNumber << std::endl;
	std::cout << "darkest secret : " << this->_darkestSecret << std::endl;
}

// Getters and setters

int	Contact::getIndex(void) const {

	return (this->_index);
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_nickName);
}

void	Contact::setIndex(int index) {
	
	this->_index = index;
}
void	Contact::setFirstName(std::string firstName) {
	
	this->_firstName = firstName;
}
void	Contact::setLastName(std::string lastName) {
	
	this->_lastName = lastName;
}
void	Contact::setNickName(std::string nickName) {
	
	this->_nickName = nickName;
}
void	Contact::setPhoneNumber(std::string phoneNumber) {
	
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	
	this->_darkestSecret = darkestSecret;
}