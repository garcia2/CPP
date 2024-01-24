
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <climits>

bool	isFloat(const std::string& str) {
	char* endPtr;
	std::strtof(str.c_str(), &endPtr);

	if (!(*endPtr == '\0' || std::isspace(*endPtr) != 0))
		std::cout << str << " not good" << std::endl;
	// Vérifie si toute la chaîne a été analysée
	return (*endPtr == '\0' || std::isspace(*endPtr) != 0);
}

int main(void) {

	std::string	line = "2010-10-31,10.19 8";
	std::istringstream stream(line);
	std::string date;
	float taux;

	std::getline(stream, date, ',');
	std::cout << (stream >> taux) << std::endl;
	std::cout << date << std::endl;
	std::cout << taux << std::endl;
	std::cout << isFloat("4.01") << std::endl;
	
}

// bool isFloat(const std::string& str) {
//     char* endPtr;
//     std::strtof(str.c_str(), &endPtr);

//     // Vérifie si toute la chaîne a été analysée
//     return *endPtr == '\0' || std::isspace(*endPtr) != 0;
// }


// int main() {
//     // Exemples d'utilisation de la fonction isFloat
//     std::cout << std::boolalpha;  // Pour afficher les booléens en tant que "true" ou "false"

//     std::cout << isFloat("3.14") << std::endl;    // true
//     std::cout << isFloat("123.456") << std::endl; // true
//     std::cout << isFloat("abc") << std::endl;      // false
//     std::cout << isFloat("42abc") << std::endl;    // false

//     return 0;
// }

// int	maxDays(int month, int year) {

// 	const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 	int maxDays = daysInMonth[month];

// 	// Vérifier si l'année est bissextile (février a 29 jours)
// 	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
// 		maxDays = 29;
// 	}

// 	return (maxDays);
// }

// int	main(void) {

// 	std::string dateStr = "2022-03-22";
// 	std::istringstream dateStream(dateStr);

//     // Variables pour stocker les composants de la date
//     int year, month, day;
//     char dash1, dash2;

//     // Essayer de lire la date avec le format attendu
//     if (dateStream >> year >> dash1 >> month >> dash2 >> day) {
        
// 		// Vérifier que les caractères de séparation sont corrects et que les composants sont valides
//         if (dash1 == '-' && dash2 == '-' && year >= 0 && month >= 1 && month <= 12 && day >= 1 && !dateStream.good()) {
            
// 			// Vérifier le nombre de jours dans le mois
//             if (day <= maxDays(month, year)) {
//                 std::cout << "GOOD" << std::endl;
// 				return (0);
//             }
//         }
//     }
// 	std::cout << "NOT GOOD" << std::endl;
// 	return (1);
// }