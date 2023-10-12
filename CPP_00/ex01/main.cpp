/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:26:34 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/11 11:05:58 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "PhoneBook.hpp"

void	prompt_commands(void)
{
	std::cout << std::endl << "Command List :" << std::endl;
	std::cout << "	ADD    - add a new contact to your phonebook (8 max)" << std::endl;
	std::cout << "	SEARCH - search and display contact's information" << std::endl;
	std::cout << "	EXIT   - quit your phonebook" << std::endl;
	std::cout << "--" << std::endl;
	std::cout << "command_prompt : ";
}

int	cinCheckEnd(void) {

	if (std::cin.eof()) {
		
		std::cout << std::endl;
		return (1);
	}
	return (0);
}

int	is_valid_command(std::string str) {

	if (cinCheckEnd())
		return (1);
	return (str.compare("ADD") == 0 || str.compare("SEARCH") == 0 || str.compare("EXIT") == 0);
}


int	search(PhoneBook phoneBook) {

	int			index;
	std::string line;

	if (phoneBook.getSize() == 0) {
		
		std::cout << "Your phonebook is empty" << std::endl;
		return (1) ;
	}
	std::cout << std::endl;
	phoneBook.printContactsLine(10);
	std::cout << "Select an index : ";
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	while (line.length() == 0 || !PhoneBook::isValidNumber(line) || index < 0 || index >= phoneBook.getSize())
	{
		
		if (cinCheckEnd())
			return (0);
		std::cout << "\"" << line << "\" is not a valid index" << std::endl;
		std::cout << "Select an index : ";
		std::getline(std::cin, line);
		index = atoi(line.c_str());
	}
	phoneBook.getContactById(index).printList();
	return (1);
}

void	prompt(PhoneBook phoneBook) {

	std::string	command;

	std::cout << "		- This is your phonebook - " << std::endl;
	while (1){
		
		prompt_commands();
		std::getline(std::cin, command);
		while (!is_valid_command(command)) {
			
			std::cout << "\"" << command << "\" is not a valid command" << std::endl;
			prompt_commands();
			std::getline(std::cin, command);
		}
		if (command.compare("ADD") == 0)
			phoneBook.add_contact();
		else if(command.compare("SEARCH") == 0) {

			if (!search(phoneBook)) {
				
				std::cout << std::endl << "	Bye bye !" << std::endl;
				return;			
			}			
		}
		else { //command = EXIT or std::cin.eof()
			
			std::cout << std::endl << "	Bye bye !" << std::endl;
			return;
		} 
	}
}

int	main(void) {
	
	PhoneBook phoneBook;
	phoneBook.fill();
	prompt(phoneBook);
	
	return (0);
}