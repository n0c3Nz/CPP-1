#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class Sed{
	private:
		std::ifstream _file;
		std::ofstream _outfile;
		std::string _find;
		std::string _replace;
		void findAndReplace();
	public:
		Sed(char *argv_1, char *argv_2, char *argv_3);
};

#endif