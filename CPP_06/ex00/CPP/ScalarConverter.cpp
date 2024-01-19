/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/12/26 18:26:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*--|Class functions :: Public|-----------------------------------------------*/

void	ScalarConverter::convert(const std::string & input) {

	int type = ScalarConverter::whatType(input);
	if (type == ScalarConverter::CHAR) {

		char c = ScalarConverter::strToChar(input);
		ScalarConverter::convertChar(c);
	}
	if (type == ScalarConverter::FLOAT){

		float number = ScalarConverter::strToFloat(input);
		ScalarConverter::convertFloat(number);
	}
	if (type == ScalarConverter::DOUBLE) {

		double number = ScalarConverter::strToDouble(input);
		ScalarConverter::convertDouble(number);
	}
	if (type == ScalarConverter::INT) {

		int number = ScalarConverter::strToInt(input);
		ScalarConverter::convertInt(number);
	}
}

/*-----------------------------------------------|Class functions :: Public|--*/



/*--|Class functions :: Private|----------------------------------------------*/

bool ScalarConverter::isFloatRound(float number) {
    return std::fabs(number - static_cast<float>(static_cast<int>(number))) == 0;
}

bool ScalarConverter::isDoubleRound(double number) {
    return std::fabs(number - static_cast<double>(static_cast<int>(number))) == 0;
}

//	printers
void	ScalarConverter::printChar(char c, bool impossible) {

	std::cout << "char: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else if (c < 33 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
}
void	ScalarConverter::printInt(int number, bool impossible) {

	std::cout << "int: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << number << std::endl;
}

void	ScalarConverter::printFloat(float number, bool impossible) {

	std::cout << "float: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isinff(number) && number > 0)
			std::cout << "+";
		std::cout << number << (ScalarConverter::isFloatRound(number) ? ".0" : "") << "f" << std::endl;
	}
}
void	ScalarConverter::printDouble(double number, bool impossible) {

	std::cout << "double: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else {

		if (isinff(number) && number > 0)
			std::cout << "+";
		std::cout << number << (ScalarConverter::isDoubleRound(number) ? ".0" : "") << std::endl;
	}
}
////


//	strToType
char ScalarConverter::strToChar(const std::string & str) {

	return (str[0]);
}
int ScalarConverter::strToInt(const std::string & str) {

	const long convertion = std::strtol(str.c_str(), NULL, 10);
	if (convertion > INT_MAX || convertion < INT_MIN)
		throw std::out_of_range("Int is out of range");
	return (static_cast<int>(convertion));
}
float ScalarConverter::strToFloat(const std::string & str) {

	const float convertion = std::strtof(str.c_str(), NULL);
	if (errno == ERANGE)
		throw std::out_of_range("Float is out of range");
	return (convertion);
}
double ScalarConverter::strToDouble(const std::string & str) {

	const double convertion = std::strtod(str.c_str(), NULL);
	if (errno == ERANGE)
		throw std::out_of_range("Double is out of range");
	return (convertion);
}
////


//		Converters
void	ScalarConverter::convertChar(char c) {

	ScalarConverter::printChar(c, 0);
	ScalarConverter::printInt(static_cast<int>(c), 0);
	ScalarConverter::printFloat(static_cast<float>(c), 0);
	ScalarConverter::printDouble(static_cast<double>(c), 0);
}

void	ScalarConverter::convertInt(int number) {

	ScalarConverter::printChar(static_cast<char>(number), (number < 0 || number > 127));
	ScalarConverter::printInt(number, 0);
	ScalarConverter::printFloat(static_cast<float>(number), 0);
	ScalarConverter::printDouble(static_cast<double>(number), 0);
}

void	ScalarConverter::convertFloat(float number) {

	ScalarConverter::printChar(static_cast<char>(number), (number < 0.0f || number > 127.0f || std::isnan(number) || std::isinf(number)));
	ScalarConverter::printInt(static_cast<int>(number), (std::isnan(number) || std::isinf(number)));
	ScalarConverter::printFloat(number, 0);
	ScalarConverter::printDouble(static_cast<double>(number), 0);
}

void	ScalarConverter::convertDouble(double number) {

	ScalarConverter::printChar(static_cast<char>(number), (number < 0.0 || number > 127.0 || std::isnan(number) || std::isinf(number)));
	ScalarConverter::printInt(static_cast<int>(number), (std::isnan(number) || std::isinf(number)));
	ScalarConverter::printFloat(static_cast<float>(number), 0);
	ScalarConverter::printDouble(number, 0);
}
////


int	ScalarConverter::whatType(const std::string & str) {

	if (str.length() == 0)
		throw (std::invalid_argument("Invalid argument"));
	if (str.length() == 1) {

		if (std::isdigit(str[0]))
			return (ScalarConverter::INT);
		else
			return (ScalarConverter::CHAR);
	}

	if (str.compare("-inff") == 0 || str.compare("+inff") == 0)
		return (ScalarConverter::FLOAT);
	if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
		return (ScalarConverter::DOUBLE);

	bool hasPoint = false;
	for (long unsigned int i = (str[0] == '-'); i < str.length() ; i++) {

		if (!std::isdigit(str[i])) {

			if (str[i] == '.' && !hasPoint && i != str.length() - 1)
				hasPoint = true;
			else if ((str[i] == 'f') && hasPoint && (i == str.length() - 1) && i != 0 && (str[i - 1] != '.'))
				return (ScalarConverter::FLOAT);
			else
				throw (std::invalid_argument("Invalid argument"));
		}
	}
	if (hasPoint)
		return (ScalarConverter::DOUBLE);
	else
		return (ScalarConverter::INT);
}

/*----------------------------------------------|Class functions :: Private|--*/
