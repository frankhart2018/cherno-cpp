#include <iostream>

class Entity;

void PrintEntity(Entity* e);

class Entity {
public:
	int x, y;

	Entity(int x, int y) {
		this->x = x; // this is pointer to current instance
		this->y = y;

		PrintEntity(this);
	}
};

void PrintEntity(Entity* e) {
	// some code
}

int main() {

	std::cin.get();
}

// this works only from inside a class' method