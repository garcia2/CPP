/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:26:34 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 00:22:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include <iomanip>

void	prompt_commands(void)
{
	std::cout << std::endl << "Command List :" << std::endl;
	std::cout << "	ADD    - add a new contact to your phonebook (8 max)" << std::endl;
	std::cout << "	SEARCH - search and display contact's information" << std::endl;
	std::cout << "	EXIT   - quit your phonebook" << std::endl;
	std::cout << "--" << std::endl;
	std::cout << "command_prompt : ";
}

int	is_valid_command(std::string str) {

	return (str.compare("ADD") == 0 || str.compare("SEARCH") == 0 || str.compare("EXIT") == 0);
}

void	search(PhoneBook phoneBook) {

	int			index;
	std::string line;

	if (phoneBook.getSize() == 0) {
		
		std::cout << "Your phonebook is empty" << std::endl;
		return ;
	}
	std::cout << std::endl;
	phoneBook.printContactsLine(10);
	std::cout << "Select an index : ";
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	while (line.length() == 0 || !(PhoneBook::isValidNumber(line)) || index < 0 || index >= phoneBook.getSize())
	{
		std::cout << "\"" << line << "\" is not a valid index" << std::endl;
		std::cout << "Select an index : ";
		std::getline(std::cin, line);
		index = atoi(line.c_str());
	}
	phoneBook.getContactById(index).printList();
}

void	prompt(PhoneBook phoneBook) {

	std::string	command;
	int			quit = 0;

	std::cout << "		- This is your phonebook - " << std::endl;
	while (!quit){
		
		prompt_commands();
		std::getline(std::cin, command);
		while (!is_valid_command(command)) {
			
			std::cout << "\"" << command << "\" is not a valid command" << std::endl;
			prompt_commands();
			std::getline(std::cin, command);
		}
		if (command.compare("ADD") == 0)
			phoneBook.add_contact();
		else if(command.compare("SEARCH") == 0)
			search(phoneBook);
		else //command = EXIT
			quit = 1;
	}
}

int	main(void) {
	
	PhoneBook phoneBook;
	prompt(phoneBook);
	
	return (0);
}