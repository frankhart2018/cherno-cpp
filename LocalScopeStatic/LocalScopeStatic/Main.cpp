#include <iostream>

void Function() {
	static int i = 0; // First time this initialization will happen
	i++;
	std::cout << i << std::endl;
}

int main() {
	Function();
	Function();
	Function();
	Function();
	Function();


	std::cin.get();
}