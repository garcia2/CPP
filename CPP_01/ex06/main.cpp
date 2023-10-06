#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cerr << "Harl : Error : You need to specify 1 and only 1 argument" << std::endl;
		return (1);
	}

	Harl				harl;
	int					nbLevels = Harl::_getNbLevels();
	const std::string*	complainList = Harl::_getComplainSList();
	std::string			level = (std::string) argv[1];

	for	(int i = 0; i < nbLevels; i++) {

		if (level.compare(complainList[i]) == 0) {

			for (int j = i; j < nbLevels; j++) {
				harl.complain(complainList[j]);
				std::cout << std::endl;
			}
			return (0);
		}
	}
	std::cerr << "Harl : Error : " << level << " is not a valid level" << std::endl;
	return (1);
}
