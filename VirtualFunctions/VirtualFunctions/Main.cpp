#include <iostream>
#include <string>

class Entity {
public:
	virtual std::string GetName() {
		return "Entity";
	}
};

class Player : public Entity {
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name) {}

	std::string GetName() override {
		return m_Name;
	}
};

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

int main() {
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	PrintName(e); // prints Entity

	Player* p = new Player("Siddhartha");
	//std::cout << p->GetName() << std::endl;
	PrintName(p); // prints Entity

	Entity* entity = p;
	std::cout << entity->GetName() << std::endl; // Will print Entity

	std::cin.get();
}

// Virtual functions help us to override methods in subclasses.

/*
	Virtual functions require extra memory due to the following reasons:-
		1) creation of v-table and entry of the function in v-table.
		2) Everytime we call the virtual function it has to go through the pointers in v-table
*/