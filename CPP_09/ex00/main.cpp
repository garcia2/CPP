/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:58:14 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/24 21:04:09 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstring>
#include <climits>

std::string	previousDay(std::string & dateStr);
std::string	nextDay(std::string & dateStr);

bool	isFloat(const std::string& str) {

	char* endPtr;
	std::strtof(str.c_str(), &endPtr);

	return (*endPtr == '\0' || std::isspace(*endPtr) != 0);
}

void	printMap(std::map<std::string, float> & csvData) {

	std::string date;

	for (std::map<std::string, float>::iterator it = csvData.begin(); it != csvData.end(); ++it) {

		date = it->first;
		std::cout << "Date : " << it->first << ", Taux : " << it->second << ", ";
		std::cout << "Previous Date : " << previousDay(date) << ", ";
		std::cout << "Next Date : " << nextDay(date) << std::endl;
	}
}

int	maxDays(int month, int year) {

	const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int maxDays = daysInMonth[month];

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		maxDays = 29;

	return (maxDays);
}

std::string	buildDate(int year, int month, int day) {

	std::ostringstream date;
    date << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day;

	return (date.str());
}

std::string	previousDay(std::string & dateStr) {
	std::istringstream dateStream(dateStr);

	int year, month, day;
	char dash1, dash2;

	if (dateStream >> year >> dash1 >> month >> dash2 >> day) {
		
		if (dash1 == '-' && dash2 == '-' && year >= 0 && month >= 1 && month <= 12 && day >= 1 && !dateStream.good()) {
			
			if (day == 1) {

				if (month == 1) {

					if (year == 0)
						throw (std::runtime_error("minimalDate"));
					year--;
					month = 12;
				}
				else
					month--;
				
				day = maxDays(month, year);
			}
			else
				day--;

			return (buildDate(year, month, day));
		}
	}
	throw std::invalid_argument("Invalid date format");
}

std::string	nextDay(std::string & dateStr) {
	
	std::istringstream dateStream(dateStr);
	int year, month, day;
	char dash1, dash2;

	if (dateStream >> year >> dash1 >> month >> dash2 >> day) {
		
		if (dash1 == '-' && dash2 == '-' && year >= 0 && month >= 1 && month <= 12 && day >= 1 && !dateStream.good()) {
			
			if (day == maxDays(month, year)) {

				if (month == 12) {

					if (year == INT_MAX)
						throw (std::runtime_error("maximalDate"));
					year++;
					month = 1;
				}
				else
					month++;
				day = 1;
			}
			else
				day++;

			return (buildDate(year, month, day));
		}
	}
	throw std::invalid_argument("Invalid date format");
}

bool isValidDateFormat(const std::string& dateStr) {
    
	std::istringstream dateStream(dateStr);
    int year, month, day;
    char dash1, dash2;

    if (dateStream >> year >> dash1 >> month >> dash2 >> day) {
        
        if (dash1 == '-' && dash2 == '-' && year >= 0 && month >= 1 && month <= 12 && day >= 1 && !dateStream.good()) {
            
            if (day <= maxDays(month, year)) {
                return true;
            }
        }
    }

    return (false);
}

bool	dateExists(std::string date, std::map<std::string, float> & csvData) {

	std::map<std::string, float>::iterator it = csvData.find(date);

	return (it != csvData.end());
}

std::string	getClosestDate(std::string date, std::map<std::string, float> & map) {

	std::string	previousDate;
	std::string	nextDate;
	bool		exit = false;
	bool		minimalDate = false;
	bool		maximalDate = false;

	try	{
		previousDate = previousDay(date);
		if (dateExists(previousDate, map))
			return (previousDate);
	}
	catch (std::runtime_error & e){
		minimalDate = true;
	}
	
	try {
		nextDate = nextDay(date);
		if (dateExists(nextDate, map))
			return (nextDate);
	}
	catch (std::runtime_error & e){
		maximalDate = true;
	}

	while (!exit) {

		if (!minimalDate) {

			try	{
				previousDate = previousDay(previousDate);
				if (dateExists(previousDate, map))
					return (previousDate);
			}
			catch (std::runtime_error & e){
				minimalDate = true;
			}	
		}
	
		if (!maximalDate) {

			try {
				nextDate = nextDay(nextDate);
				if (dateExists(nextDate, map))
					return (nextDate);
			}
			catch (std::runtime_error & e){
				maximalDate = true;
			}			
		}
		
		if (minimalDate && maximalDate)
			exit = true;
	}
	throw std::invalid_argument("infinite searching date");
}

int	printNewLine(std::string date, float btc, std::map<std::string, float> & csvData) {

	std::string dateToPrint;
	
	if (dateExists(date, csvData))
		dateToPrint = date;
	else {
		
		try {
			
			dateToPrint = getClosestDate(date, csvData);
		}
		catch (std::invalid_argument & e){
			
			std::cout << "btc: error: " << e.what() << std::endl;
			return (0);
		}
	}
	
	std::map<std::string, float>::iterator it = csvData.find(dateToPrint);
	std::cout << date << " => " << btc << " = " << (it->second * btc) << " (" << btc << " * " << it->second << ")" << std::endl;

	return (1);
}

int	getCsvData(std::map<std::string, float> & csvData) {

	std::string fileName = "data.csv";
	std::ifstream file(fileName.c_str());

	if (!file.is_open()) {

		std::cerr << "Erreur lors de l'ouverture du fichier : " << fileName << std::endl;
		return (0);
	}

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		
		std::istringstream stream(line);
		std::string date;
		std::string rate;
		
		if (std::getline(stream, date, ',') && stream >> rate && !stream.good()) {

			if (isValidDateFormat(date) && isFloat(rate))
				csvData[date] = std::strtof(rate.c_str(), NULL);
			else {
				
				std::cerr << "Error invalid csv format" << std::endl;
				file.close();
				return (0);
			}
		}
		else{
				
			std::cerr << "Error invalid csv format" << std::endl;
			file.close();
			return (0);
		}
	}

	file.close();

	return (1);
}

int	getInput(std::string & filename, std::map<std::string, float> csvDate) {

	std::ifstream file(filename.c_str());

	if (!file.is_open()) {
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}

	std::string line;
	std::getline(file, line);
	
	while (std::getline(file, line)) {
		
		std::istringstream stream(line);
		std::string date;
		std::string rate;
		
		if (std::getline(stream, date, '|') && stream >> rate && !stream.good()) {
			
			if (date.length() > 0)
				date = date.substr(0, date.length() - 1);

			if (isValidDateFormat(date) && isFloat(rate)) {

				float fRate = std::strtof(rate.c_str(), NULL);
				if (fRate >= 0 && fRate < 1000) {
					
					printNewLine(date, fRate, csvDate);
				}
				else {

					std::cout << "Error: " << (fRate < 0 ? "not a positive number" : "too large a number.") << std::endl;
				}
			}		
			else {
				
				std::cerr << "Error: bad input => " << line << std::endl;
			}
		}
		else{
				
			std::cerr << "Error: bad input => " << line << std::endl;
		}
	}
	file.close();
	return (1);
}

int main(int argc, char *argv[]) {

	if (argc > 2) {

		std::cout << "Error: too many args" << std::endl;
		return (2);
	}
	if (argc < 2) {
		
		std::cout << "Error: could not open files" << std::endl;
		return (3);
	}

	std::map<std::string, float> csvData; // Map pour stocker les données du CSV
	
	if (!getCsvData(csvData) || csvData.empty())
		return (1);

	std::string fileName(argv[1]);
	getInput(fileName, csvData);

	// std::cout << isValidDateFormat("2022-03-22z") << std::endl;

	// Afficher les données stockées dans la map
	// printNewLine("0000-01-01", 0.134f, csvData);
	// printMap(csvData);

	return (0);
}

// int main(void) {

// 	std::string	line = "2010-10-31,10.19";
// 	std::istringstream stream(line);
// 	std::string date;
// 	float taux;

// 	std::getline(stream, date, ',');
// 	std::cout << (stream >> taux) << std::endl;
// 	std::cout << date << std::endl;
// 	std::cout << taux << std::endl;
	
// }

// #include <iostream>
// #include <cstdlib>
// #include <cstring>

// int main() {
//     // Exemples d'utilisation de la fonction isFloat
//     std::cout << std::boolalpha;  // Pour afficher les booléens en tant que "true" ou "false"

//     std::cout << isFloat("3.14") << std::endl;    // true
//     std::cout << isFloat("123.456") << std::endl; // true
//     std::cout << isFloat("abc") << std::endl;      // false
//     std::cout << isFloat("42abc") << std::endl;    // false

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include <map>

// // Function to read and parse the CSV database into a map
// std::map<std::string, double> readCSVDatabase(const std::string& csvFilename) {
//     std::map<std::string, double> exchangeRates;
//     std::ifstream file(csvFilename.c_str());

//     if (!file.is_open()) {
//         std::cerr << "Error opening CSV database file." << std::endl;
//         // Handle error, possibly exit the program
//     }

//     std::string line;
//     while (std::getline(file, line)) {
//         std::istringstream iss(line);
//         std::string date;
//         double rate;
//         if (iss >> date >> rate) {
//             exchangeRates[date] = rate;
//         }
//     }

//     file.close();
//     return exchangeRates;
// }

// int main(int argc, char* argv[]) {
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " input_file" << std::endl;
//         return 1;
//     }

//     // Read the CSV database
//     std::map<std::string, double> exchangeRates = readCSVDatabase("data.csv");

//     // Read and process the input file
//     std::ifstream inputFile(argv[1]);
//     if (!inputFile.is_open()) {
//         std::cerr << "Error opening input file." << std::endl;
//         return 1;
//     }

//     std::string line;
//     while (std::getline(inputFile, line)) {
//         std::istringstream iss(line);
//         std::string date;
//         double value;

//         if (iss >> date >> value) {
//             // Check if the date exists in the exchangeRates database
//             if (exchangeRates.find(date) != exchangeRates.end()) {
//                 // Multiply value by the exchange rate and output the result
//                 double result = value * exchangeRates[date];
//                 std::cout << "Result for date " << date << ": " << result << std::endl;
//             } else {
//                 std::cerr << "Error: No exchange rate found for date " << date << std::endl;
//             }
//         } else {
//             std::cerr << "Error parsing line: " << line << std::endl;
//         }
//     }

//     inputFile.close();
//     return 0;
// }
