#include<iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int* value) {
	(*value)++;
}

void IncrementNew(int& value) {
	value++;
}

int main() {
	int a = 5;
	int& ref = a; // ref is now an alias to a, when we declare a reference we have to assign something to it
	ref = 2;
	LOG(a);

	Increment(&a);
	LOG(a);

	IncrementNew(a);
	LOG(a);

	int b = 3;
	int* ptr = &a;
	*ptr = 2;
	ptr = &b;
	*ptr = 1;
	LOG(a);
	LOG(b);

	std::cin.get();
}

// References aren't stored in memory like pointers