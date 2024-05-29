#include <sed.hpp>

Sed::Sed(char *argv_1, char *argv_2, char *argv_3) : _file(argv_1), _find(argv_2), _replace(argv_3)
{
	std::string mix(argv_1);
	mix += ".replace";
	_outfile.open(mix);
	if (!_outfile)
		std::cerr << "Error creating " << mix << std::endl;
	findAndReplace();
}

void Sed::findAndReplace()
{
	if (!_file || _find.empty())
		std::cerr << "Void parameter detected." << std::endl;

	std::string line;
	int pos = 0;
	int k = 0;
	while (std::getline(_file, line)){
		pos = line.find(_find);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + _replace + line.substr(pos + _find.length());
			pos = line.find(_find, pos + _replace.length());
		}
		_outfile << line << std::endl;
	}
	_file.close();
	_outfile.close();
}