#include <iostream>

int main() {
	for (int i = 0; i < 5; i++) {
		std::cout << "Hello World!" << std::endl;
	}

	std::cout << "===========================================" << std::endl;

	int i = 0;
	while (i < 5) {
		std::cout << "Hello World!" << std::endl;
		i++;
	}

	std::cout << "===========================================" << std::endl;

	i = 0;
	do {
		std::cout << "Hello World!" << std::endl;
		i++;
	} while (i < 5);

	std::cin.get();
}