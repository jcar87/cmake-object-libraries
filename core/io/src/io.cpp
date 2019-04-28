#include <core/io/io.hpp>
#include <iostream>

void core::io::printString(const std::string& someString)
{
	std::cout << someString << "\n";
}

int core::io::returnNumberFour()
{
	return 4;
}