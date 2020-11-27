#include <iostream>

class Entity {
public:
	Entity() {
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

int* CreateArray() {
	int array[50];
	return array; // Returns memory to a cleared stack address, to keep it, it has to be put in heap
}

class ScopedPtr {
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr) : m_Ptr(ptr) {}

	~ScopedPtr() {
		delete m_Ptr;
	}
};

int main() {
	{
		Entity e; // Gets cleaned as it is in stack, but if it were in heap it would not get cleaned
		ScopedPtr e1 = new Entity(); // Gets destroyed even when using new to allocate to heap, as ScopedPtr gets out of scope
	}

	std::cin.get();
}