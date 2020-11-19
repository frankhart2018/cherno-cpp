#include <iostream>
#include <array>

int main() {
	int example[5];
	example[0] = 2;
	example[4] = 4;

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl;

	for (int i = 0; i < 5; i++)
		example[i] = 2;

	int* ptr = example;
	*(ptr + 2) = 6;
	*(int*)((char*)ptr + 8) = 6; 

	int* another = new int[5]; // created on the heap

	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;

	std::array<int, 5> anotherArr;
	std::cout << anotherArr.size() << std::endl;

	std::cin.get();
}