#include <iostream>
#include <string>

void PrintString(const std::string& string) {
	std::cout << string << std::endl;
}

int main() {
	const char* name = "Siddhartha"; // Making char will make it immutable (like string)
	std::cout << name << std::endl;

	//char name2[6] = { 'C', 'h', 'e', 'r', 'n', 'o' }; // Will print a bunch of garbage values too as it does not have \0 at the end
	char name2[7] = { 'C', 'h', 'e', 'r', 'n', 'o', '\0' };
	std::cout << name2 << std::endl;

	std::string name3 = "Siddhartha";
	std::cout << name3 << std::endl;

	std::string test = std::string("Siddhartha") + " Dhar!";
	bool contains = test.find("no") != std::string::npos;

	PrintString(test);

	std::cin.get();
}