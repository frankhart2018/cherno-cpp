#include <iostream>
#include <string>
#include <memory>

class Entity {
public:
	Entity() {
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};

int main() {
	{
		std::shared_ptr<Entity> e0;
		{
			// This is not the preferred way to make unique pointers
			//std::unique_ptr<Entity> entity(new Entity()); // Have to be defined explicitly = new Entity() implicit doesn't work here

			// This is the preferred way to make unique pointers
			std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // This handles exceptions

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); // If we use the new then it creates two pointers
			std::weak_ptr<Entity> = sharedEntity;
			e0 = sharedEntity;

			entity->Print();
		}
	}

	std::cin.get();
}

/*
	Smart pointers have some overhead though

	std::unique_ptr - Scoped pointer, when it goes out of scope it will delete the heap allocated data, it is called unique as we cannot copy this, because if copied two pointers are pointing to the same memory address and if one of them dies then the other one is just pointing to a memory location containing nothing.

	std::shared_ptr - Keeps count of number of references it has, as soon as this count becomes 0 it gets deleted.

	std::weak_ptr - When a shared pointer is copied to another shared pointer it will increase the reference count but if it is copied to a weak pointer it would not increase the reference count
*/