#include <iostream>

// Default visibility is private in class
class Entity {
protected:
	int X, Y;
public:
	Entity() {
		X = 0;
	}
};

class Player : public Entity {
public:
	Player() {
		X = 2;
	}
};

int main() {

	std::cin.get();
}