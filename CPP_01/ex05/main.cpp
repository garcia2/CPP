#include "Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cerr << "Harl : Error : You need to specify 1 and only 1 argument" << std::endl;
		return (1);
	}

	Harl	harl;
	
	harl.complain(argv[1]);
	return (0);
}
