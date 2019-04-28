#include <iostream>

#include <core/database/database.hpp>
#include <core/io/io.hpp>

int main(int argc, char** argv)
{
	const int four = core::io::returnNumberFour();
	const int two = core::database::returnNumberTwo();

	std::cout << "Two = " << two << ", four =" << four << "\n";

	return EXIT_SUCCESS;
}