/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:19:14 by nigarcia          #+#    #+#             */
/*   Updated: 2024/02/01 15:31:38 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cerr << "Error: usage: ex. ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
		return (1);
	}
	
	RPN(argv[1]);

	return (0);
}

/* ************************************************************************** */

bool RPN(char * str) {

	std::stack<int> numbers;

	std::istringstream iss(str);
	char token;

	while (iss >> token) {

		if (isdigit(token)) {

			numbers.push(token - '0');
		}
		else if (isOperator(token)) {

			if (doOperation(token, numbers) == false)
				return (false);

		}
		else {

			std::cout << "error: invalid notation" << std::endl;
			return (false);
		}
	}

	if (!iss.eof() || numbers.size() != 1) {

		std::cout << "error: invalid notation" << std::endl;
		return (false);
	}

	std::cout << numbers.top() << std::endl;
	return (true);
}


bool doOperation(char token, std::stack<int> & numbers) {

	if (numbers.size() < 2) {

		std::cout << "error: invalid notation" << std::endl;
		return (false);
	}
	int	a = numbers.top();
	numbers.pop();

	int	b = numbers.top();
	numbers.pop();

	switch (token) {

		case '+':
			numbers.push(b + a);
			break;

		case '-':
			numbers.push(b - a);
			break;

		case '*':
			numbers.push(b * a);
			break;

		case '/':
			numbers.push(b / a);
			break;

	}
	return (true);
}


bool isOperator(char token) {

	std::string operators = "+-*/";
	return (operators.find(token) != std::string::npos);
}