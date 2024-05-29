#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "Address of string:\t\t" << &string << std::endl;
	std::cout << "Content Address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Content Address of stringREF:\t" << &stringREF << std::endl;
	std::cout << "Content of string:\t\t" << string << std::endl;
	std::cout << "Content of stringPTR:\t\t" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:\t\t" << stringREF << std::endl;
	return 0;
}