#include <iostream>

int main() {
	// Integer variable
	int variable = 8;
	std::cout << variable << std::endl;

	// Update value
	variable = 20;
	std::cout << variable << std::endl;

	// Unsigned variable
	unsigned int var = 8;
	std::cout << var << std::endl;

	// Character variable
	char a = 'A';
	std::cout << a << std::endl;

	// Still prints 'A' as it has type int
	a = 65;
	std::cout << a << std::endl;

	// This will print 65 as its type is short (or short int)
	short b = 65;
	std::cout << b << std::endl;

	// Float (but actually double)
	float var1 = 5.5;
	std::cout << var1 << std::endl;

	// Actual float
	var1 = 5.5f;
	std::cout << var1 << std::endl;

	// Double
	double var2 = 5.2;
	std::cout << var2 << std::endl;

	// Boolean
	bool boolVar = true;
	std::cout << boolVar << std::endl;

	boolVar = false;
	std::cout << boolVar << std::endl;

	// Sizeof 
	std::cout << sizeof(bool) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(double) << std::endl;

	std::cin.get();
}