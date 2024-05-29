#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc != 2) {
		harl.complain("debug");
		harl.complain("info");
		harl.complain("warning");
		harl.complain("error");
		return 1;
	}
	else {
		std::string level = argv[1];
		harl.complain(level);
	}
	return 0;
}