#include <iostream>
#include <string>

class Entity {
public:
	int x;
public:
	void Print() const {
		std::cout << "Hello!" << std::endl;
	}
};

class ScopedPtr {
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity) : m_Obj(entity) {}

	~ScopedPtr() {
		delete m_Obj;
	}

	Entity* operator->() {
		return m_Obj;
	}
};

struct Vector3 {
	float x, y, z;
};

int main() {
	Entity e;
	e.Print();

	Entity* ptr = &e;
	ptr->Print(); // Dereference and then call Print
	ptr->x = 2;

	ScopedPtr entity = new Entity();
	entity->Print();

	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;

	std::cin.get();
}