#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {
	int var = 8;
	void* ptr = NULL; // Maps to 0
	ptr = &var;

	int* ptr1 = &var;
	*ptr1 = 10;
	LOG(var);

	char* buffer = new char[8]; // allocate 8 bytes of memory
	memset(buffer, 0, 8);

	char** ptr2 = &buffer;

	delete[] buffer;

	std::cin.get();
}