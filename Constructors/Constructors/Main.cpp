#include <iostream>

class Entity {
public:
	float x, y;

	Entity() {
		x = 0.0f;
		y = 0.0f;
	}

	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

class Log {
public:
	Log() = delete; // Won't allow user to create instance of Log class

	static void Write() {

	}
};

int main() {
	Entity e;
	e.Print();

	Entity e1(10.0f, 5.0f);
	e1.Print();

	std::cin.get();
}