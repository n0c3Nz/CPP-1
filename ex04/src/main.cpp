#include "sed.hpp"

int main (int argc, char **argv){
	if (argc != 4)
		std::cerr << "Non valid nr of args" << std::endl;
	else
		Sed sed(argv[1], argv[2], argv[3]);
	return 0;
}