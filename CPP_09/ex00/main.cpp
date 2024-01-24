/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:58:14 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 21:52:37 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

// int main() {
//     std::string filename = "data.csv";
//     std::ifstream file(filename.c_str());

//     if (!file.is_open()) {
//         std::cerr << "Erreur lors de l'ouverture du fichier : " << filename << std::endl;
//         return 1;
//     }

//     std::map<std::string, float> csvData; // Map pour stocker les données du CSV
//     std::string line;
//     int lineNumber = 1;

//     while (std::getline(file, line)) {
//         std::istringstream stream(line);
//         std::string date;
//         float taux;

//         // Extraction de la date et du taux depuis la ligne CSV
//         if (std::getline(stream, date, ',') && stream >> taux) {
//             // Stockage dans la map
//             csvData[date] = taux;

//             // Afficher les données de la ligne si besoin
//             // std::cout << "Ligne " << lineNumber << ": Date = " << date << ", Taux = " << taux << std::endl;
//             ++lineNumber;
//         } else {
//             std::cerr << "Erreur de format sur la ligne " << lineNumber << std::endl;
//         }
//     }

//     file.close();

//     // Afficher les données stockées dans la map
//     for (std::map<std::string, float>::iterator it = csvData.begin(); it != csvData.end(); ++it) {
//         std::cout << "Date : " << it->first << ", Taux : " << it->second << std::endl;
//     }

//     return 0;
// }

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

#include <iostream>
#include <cstdlib>
#include <cstring>

bool isFloat(const std::string& str) {
    char* endPtr;
    std::strtod(str.c_str(), &endPtr);

    // Vérifie si toute la chaîne a été analysée
    return *endPtr == '\0' || std::isspace(*endPtr) != 0;
}

int main() {
    // Exemples d'utilisation de la fonction isFloat
    std::cout << std::boolalpha;  // Pour afficher les booléens en tant que "true" ou "false"

    std::cout << isFloat("3.14") << std::endl;    // true
    std::cout << isFloat("123.456") << std::endl; // true
    std::cout << isFloat("abc") << std::endl;      // false
    std::cout << isFloat("42abc") << std::endl;    // false

    return 0;
}
