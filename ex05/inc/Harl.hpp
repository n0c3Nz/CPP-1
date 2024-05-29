#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

const std::string	__debug_msg = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
const std::string	__info_msg =  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
const std::string	__warning_msg =  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
const std::string	__error_msg =  "This is unacceptable! I want to speak to the manager now.\n";


class Harl{
	private:
		void debug() { std::cout << "DEBUG:   " << __debug_msg; }
		void info() { std::cout << "INFO:    " << __info_msg; }
		void warning() { std::cout << "WARNING: " << __warning_msg; }
		void error() { std::cout << "ERROR:   " << __error_msg; }
	public:
		Harl();
		void complain( std::string level );
};

#endif