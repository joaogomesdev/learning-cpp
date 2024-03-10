#include <iostream> // import iostream

// the linker is going to find this function definition, if not it triggers an linker error
void Log(const char* message); // we dont need to specify the name of the arg on a function declaration


int main() // entry point
{ 

	Log("Hello world!");
	std::cin.get(); // Wait to press enter

	// return 0; // we dont need to return 0, the main function will assume that we are returning 0 - ONLY THE MAIN FUNCTION 
}
