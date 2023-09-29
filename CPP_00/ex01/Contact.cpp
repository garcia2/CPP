/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/29 18:15:35 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


/*--|Constructors & Destructors|----------------------------------------------*/

Contact::Contact (void) { 
	
	//std::cout << "Contact " << " contructor called" << std::endl;
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	
	//std::cout << "Parametric contact contructor called" << std::endl;
	this->_index = index;
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

Contact::~Contact(void) {
	
	//std::cout << "Contact destructor called" << std::endl;
}

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Contact::printLine(int padding) const {

	std::cout << "|" << std::setw(padding) << this->_index << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_firstName, padding) << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_lastName, padding) << "|";
	std::cout << std::setw(padding) << Contact::getTruncatedArg((std::string) this->_nickName, padding) << "|" << std::endl;
}

void	Contact::printList(void) const {
	
	std::cout << std::endl << "- Contact Informations - " << std::endl;
	std::cout << "	index          : " << this->_index << std::endl;
	std::cout << "	first name     : " << this->_firstName << std::endl;
	std::cout << "	last name      : " << this->_lastName << std::endl;
	std::cout << "	nickname       : " << this->_nickName << std::endl;
	std::cout << "	phone number   : " << this->_phoneNumber << std::endl;
	std::cout << "	darkest secret : " << this->_darkestSecret << std::endl;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

void	Contact::printFirstLine(int padding) {

	std::cout << "|" << std::setw(padding) << "index" << "|";
	std::cout << std::setw(padding) << "first name" << "|";
	std::cout << std::setw(padding) << "last name" << "|";
	std::cout << std::setw(padding) << "nickname" << "|" << std::endl;
}

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Private|----------------------------------------------*/

std::string	Contact::getTruncatedArg(std::string str, int padding) {

	std::string newStr;

	if ((int) str.length() > padding)
		newStr = str.substr(0, padding - 1) + ".";
	else
		newStr = str;
	return (newStr);
}

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Getters|-----------------------------------------------------------------*/

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

/*-----------------------------------------------------------------|Getters|--*/


/*--|Setters|-----------------------------------------------------------------*/

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

/*-----------------------------------------------------------------|Setters|--*/
