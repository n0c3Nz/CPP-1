#include "Harl.hpp"

Harl::Harl() {}

void	Harl::complain(std::string level) {
	std::string options[] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < sizeof(options) / sizeof(options[0]); ++i) {
		if (options[i] == level) {
			(this->*functions[i])();
			break ;
		}
	}
}