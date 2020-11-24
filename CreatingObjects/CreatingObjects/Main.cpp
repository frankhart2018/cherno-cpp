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
	Entity entity; // Fastest way to create object
	std::cout << entity.GetName() << std::endl;

	Entity entity1("Cherno");
	std::cout << entity1.GetName() << std::endl;

	Entity entity2 = Entity("Cherno");
	std::cout << entity2.GetName() << std::endl;

	Entity* entity3 = new Entity("Cherno"); // Heap allocation (this takes longer than stack)
	std::cout << entity3->GetName() << std::endl; // Instead of entity3->GetName() we can do - (*entity).GetName()
	delete entity3;

	std::cin.get();
}