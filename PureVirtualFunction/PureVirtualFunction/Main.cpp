#include <iostream>
#include <string>

class Printable {
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable {
public:
	//virtual std::string GetName() = 0; // Make it a pure virtual function, it has to be implemented in subclass
	virtual std::string GetName() {
		return "Entity";
	}
	std::string GetClassName() override {
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

	std::string GetClassName() override {
		return "Player";
	}
};

class A : public Printable {
public:
	std::string GetClassName() override {
		return "A";
	}
};

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj) {
	std::cout << obj->GetClassName() << std::endl;
}

int main() {
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;

	Player* p = new Player("Siddhartha");
	//std::cout << p->GetName() << std::endl;

	Print(e);
	Print(p);
	Print(new A());

	std::cin.get();
}

// Pure virtual functions allow us to create interface (from Java) type structures in C++