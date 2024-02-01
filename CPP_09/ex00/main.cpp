/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:58:14 by nicolas           #+#    #+#             */
/*   Updated: 2024/02/01 15:54:11 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {

	if (argc > 2) {

		std::cerr << "Error: too many args" << std::endl;
		return (2);
	}
	if (argc < 2) {
		
		std::cerr << "Error: could not open files" << std::endl;
		return (3);
	}

	std::map<std::string, float> csvData;
	
	if (!getCsvData(csvData) || csvData.empty())
		return (1);

	std::string fileName(argv[1]);
	getInput(fileName, csvData);

	return (0);
}


/* ************************************************************************** */
// 			FILE HANDLING

int	getCsvData(std::map<std::string, float> & csvData) {

	std::string fileName = "data.csv";
	std::ifstream file(fileName.c_str());

	if (!file.is_open()) {

		std::cerr << "Error: file can't be open : " << fileName << std::endl;
		return (0);
	}

	std::string line;
	std::getline(file, line);
	if (line.compare("date,exchange_rate") != 0) {

		std::cerr << "Error: invalid csv format" << std::endl;
	}

	int i = 2;
	while (std::getline(file, line)) {
		
		std::istringstream stream(line);
		std::string 		date;
		std::string			rate;
		bool				dateValid = true;

		size_t sepatator = line.find(',');
        if ( (sepatator == std::string::npos) || (sepatator == 0) || (sepatator == line.length() - 1) ) {
            std::cerr << "Error: csv file not valid: " << "line " << i << ": '" << line << "'" << std::endl;
			file.close();
            return (0);
        }

		date = line.substr(0, sepatator);
		rate = line.substr(sepatator + 1);

		try {
			getDate(date);
		} catch (std::exception & e) {
			dateValid = false;
		}

		if (dateValid && isFloat(rate))
			csvData[date] = std::strtof(rate.c_str(), NULL);
		else {			
			std::cerr << "Error: csv file not valid: " << "line " << i << ": '" << line << "'" << std::endl;
			file.close();
			return (0);
		}
		i++;
	}

	file.close();

	return (1);
}


int	getInput(std::string & fileName, std::map<std::string, float> csvDate) {

	std::ifstream file(fileName.c_str());

	if (!file.is_open()) {
		std::cerr << "Error: file can't be open : " << fileName << std::endl;
		return (0);
	}

	std::string line;
	std::getline(file, line);

	if (line.compare("date | value") != 0) {
		
		std::cerr << "Error: header file not valid : " << fileName << std::endl;
		return (0);
	}
	
	while (std::getline(file, line)) {
		
		std::string strDate;
		std::string rate;
		t_date		date;
		bool		dateValid = true;

		size_t sepatator = line.find('|');
        if ((sepatator == std::string::npos) || (sepatator == 0) || (sepatator == line.length() - 1) || (line[sepatator - 1] != ' ') || (line[sepatator + 1] != ' ')) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        strDate = line.substr(0, sepatator - 1);
		rate = line.substr(sepatator + 1);

		try {
			date = getDate(strDate);
		}
		catch (std::exception & e) {

			dateValid = false;
		}
		if (dateValid && rate[0] == ' ' && isFloat(rate.substr(1, rate.length() - 1))) {
			
			float fRate = std::strtof(rate.c_str(), NULL);
			
			if (fRate >= 0 && fRate < 1000)			
				printNewLine(date, fRate, csvDate);
			else
				std::cerr << "Error: " << (fRate < 0 ? "not a positive number" : "too large a number.") << std::endl;
		}
		else {
			std::cerr << "Error: bad input => " << line << std::endl;
		}
	}
	file.close();
	return (1);
}


int	printNewLine(t_date date, float btc, std::map<std::string, float> & csvData) {

	std::string strDate;
	
	if (dateExists(date, csvData))
		strDate = buildDate(date);
	else {
		
		try {
			strDate = getClosestDate(date, csvData);
		}
		catch (std::exception & e){		
			std::cerr << "Error: " << e.what() << std::endl;
			return (0);
		}
	}
	
	std::map<std::string, float>::iterator it = csvData.find(strDate);
	std::cout << buildDate(date) << " => " << btc << " = " << (it->second * btc) << std::endl;

	return (1);
}


/* ************************************************************************** */
// 			DATE HANDLING

std::string	getClosestDate(t_date date, std::map<std::string, float> & map) {

	t_date		previousDate;

	previousDate = previousDay(date);
	if (dateExists(previousDate, map))
		return (buildDate(previousDate));

	while (true) {

		previousDate = previousDay(previousDate);
		if (dateExists(previousDate, map))
			return (buildDate(previousDate));
	}
}


t_date	previousDay(t_date date) {

	t_date newDate;

	newDate.year = date.year;
	newDate.month = date.month;
	newDate.day = date.day; 
			
	if (newDate.day == 1) {

		if (newDate.month == 1) {

			if (newDate.year == 0)
				throw (std::runtime_error("no previous date"));
			newDate.year--;
			newDate.month = 12;
		}
		else
			newDate.month--;
		
		newDate.day = maxDays(newDate.month, newDate.year);
	}
	else
		newDate.day--;

	return (newDate);
}


int	maxDays(int month, int year) {

	const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int maxDays = daysInMonth[month];

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		maxDays = 29;

	return (maxDays);
}


std::string	buildDate(t_date date) {

	int	year = date.year;
	int	month = date.month;
	int	day = date.day;

	std::ostringstream dateStream;
    dateStream << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day;

	return (dateStream.str());
}


t_date	getDate(const std::string &	dateStr) {
    
	std::istringstream dateStream(dateStr);
    int		year, month, day;
    char	dash1, dash2;

	if (dateStr.find(' ') != std::string::npos || dateStr.find('	') != std::string::npos)
		throw std::runtime_error("getDate: error: invalid date format");

    if (dateStream >> year >> dash1 >> month >> dash2 >> day) {
        
        if (dash1 == '-' && dash2 == '-' && year >= 0 && month >= 1 && month <= 12 && day >= 1 && !dateStream.good()) {
            
            if (day <= maxDays(month, year)) {    
				t_date	date;
				
				date.year = year;
				date.month = month;
				date.day = day;

				return (date);
            }
        }
    }

    throw std::runtime_error("getDate: error: invalid date format");
}


bool	dateExists(std::string date, std::map<std::string, float> & csvData) {

	std::map<std::string, float>::iterator it = csvData.find(date);

	return (it != csvData.end());
}

bool	dateExists(t_date date, std::map<std::string, float> & csvData) {

	std::string strDate = buildDate(date);
	std::map<std::string, float>::iterator it = csvData.find(strDate);

	return (it != csvData.end());
}


/* ************************************************************************** */
// 			UTILS

bool	isFloat(const std::string& str) {

	if (str.size() == 0 || str[0] == '.')
		return (false);
	if (str.find(' ') != std::string::npos || str.find('	') != std::string::npos)
		return (false);

	char* endPtr;
	std::strtof(str.c_str(), &endPtr);

	return (*endPtr == '\0' || std::isspace(*endPtr) != 0);
}
