#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name) : m_Name(name), m_Age(-1) {}
	explicit Entity(int age) : m_Name("Unknown"), m_Age(age) {} // Will not allow implicit conversion now

	void Print() {
		std::cout << "Name: " << m_Name << ", age: " << m_Age << std::endl;
	}
};

void PrintEntity(const Entity& entity) {
	// some code
}

int main() {
	/*Entity a("Cherno");
	Entity b(22);*/

	// Implicit conversion (in C++ only one implicit conversion is allowed not chained)
	Entity a = std::string("Cherno");
	Entity b = 22;

	PrintEntity(22);
	PrintEntity(std::string("Cherno"));

	std::cin.get();
}