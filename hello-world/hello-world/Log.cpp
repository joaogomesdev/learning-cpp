#include <iostream> // import iostream

void Log(const char* message)
{
	std::cout << message << std::endl; // the "<<" operator works like function std::cout.print(message).print(std::endl)
}