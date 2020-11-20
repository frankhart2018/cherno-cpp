#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const {
		m_DebugCount++;
		return m_Name;
	}
};

int main() {
	const Entity e;
	e.GetName();

	int x = 0;

	// Lambda function
	auto f = [=]() mutable { // & means pass by reference, = means pass by value
		x++;
		std::cout << x << std::endl;
	};

	// Mutable allows changing variables that are passed by value

	f();
	std::cout << x << std::endl; // It is still 0 because it was passed by value to the lambda

	std::cin.get();
}