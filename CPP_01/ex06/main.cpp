#include <iostream>
#include "Harl.hpp"

//	--MAIN mieux--

// int	main(int argc, char **argv) {

// 	if (argc != 2) {

// 		std::cerr << "Harl : Error : You need to specify 1 and only 1 argument" << std::endl;
// 		return (1);
// 	}

// 	Harl				harl;
// 	int					nbLevels = Harl::_getNbLevels();
// 	const std::string*	complainList = Harl::_getComplainSList();
// 	std::string			level = (std::string) argv[1];

// 	for	(int i = 0; i < nbLevels; i++) {

// 		if (level.compare(complainList[i]) == 0) {

// 			for (int j = i; j < nbLevels; j++) {
// 				harl.complain(complainList[j]);
// 				std::cout << std::endl;
// 			}
// 			return (0);
// 		}
// 	}
// 	std::cerr << "Harl : Error : " << level << " is not a valid level" << std::endl;
// 	return (1);
// }

//	--MAIN NUL POUR LE SUJET NUL

int	get_level(std::string level) {

	const int			nbLevels = Harl::_getNbLevels();
	const std::string*	complainList = Harl::_getComplainSList();
	
	for	(int i = 0; i < nbLevels; i++) {

		if (level.compare(complainList[i]) == 0) {

			return (i);
		}
	}
	return (-1);
}

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cerr << "Harl : Error : You need to specify 1 and only 1 argument" << std::endl;
		return (1);
	}

	Harl				harl;
	const std::string*	complainList = Harl::_getComplainSList();
	int					level = get_level((std::string) argv[1]);

	switch (level) {
        case 0:
            harl.complain(complainList[0]);
			harl.complain(complainList[1]);
			harl.complain(complainList[2]);
			harl.complain(complainList[3]);
            break;

        case 1:
            harl.complain(complainList[1]);
			harl.complain(complainList[2]);
			harl.complain(complainList[3]);
            break;

        case 2:
            harl.complain(complainList[2]);
			harl.complain(complainList[3]);
            break;
		
		case 3:
            harl.complain(complainList[3]);
            break;

        default:
            std::cerr << "Harl : Error : \"" << argv[1] << "\" is not a valid level" << std::endl;
            break;
    }

	return (1);
}
