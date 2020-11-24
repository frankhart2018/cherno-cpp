#include <iostream>
#include <string>

using String = std::string;

class Entity {
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const {
		return m_Name;
	}
};

int main() {
	int a = 2;
	int* b = new int; // 4 byte int in heap
	int* c = new int[50]; // Array

	Entity* e = new Entity[50]; // Array of entities, also calls the constructor
	// Usually new calls malloc in the backend

	delete[] e, c;
	delete b;

	std::cin.get();
}