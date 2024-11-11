#pragma once

#include <iostream>
#include <fstream>

class Replace {
private:
	std::ifstream	openFile;
	std::ofstream	newFile;
	std::string 	str;
	char 			c;
public:
	Replace(char **, int);
	~Replace();
	int	argcChecker(int argc);
	int myReplace(char **argv);
};
