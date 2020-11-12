#include <iostream>

#include "Log.h"

int main() {
	int x = 6;
	bool comparisonResult = x == 5;
	if (comparisonResult) {
		Log("Hello World!");
	}

	const char* ptr = "Hello";
	if (ptr)
		Log(ptr);
	if (ptr == "Hello")
		Log("Ptr is Hello!");
	else
		Log("Pts is null!");

	std::cin.get();
}