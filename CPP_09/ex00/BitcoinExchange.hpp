/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:58:14 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/31 15:37:23 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <climits>


typedef struct s_date {
    int day;
    int month;
    int year;
}	t_date;


// 			FILE HANDLING
int			getCsvData(std::map<std::string, float> & csvData);
int			printNewLine(t_date date, float btc, std::map<std::string, float> & csvData);
int			getInput(std::string & filename, std::map<std::string, float> csvDate);

// 			DATE HANDLING
t_date		getDate(const std::string &	dateStr);
std::string	getClosestDate(t_date date, std::map<std::string, float> & map);
t_date		previousDay(t_date date);
int			maxDays(int month, int year);
std::string	buildDate(t_date date);
bool		dateExists(std::string date, std::map<std::string, float> & csvData);
bool		dateExists(t_date date, std::map<std::string, float> & csvData);

// 			UTILS
bool	isFloat(const std::string & str);
