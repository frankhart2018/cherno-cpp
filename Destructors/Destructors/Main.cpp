#include <iostream>

class Entity {
public:
	float x, y;

	Entity() {
		std::cout << "Constructed Entity!" << std::endl;
		x = 0.0f;
		y = 0.0f;
	}

	Entity(float X, float Y) {
		x = X;
		y = Y;
	}

	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
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

void Function() {
	Entity e;
	e.Print();

	Entity e1(10.0f, 5.0f);
	e1.Print();
	//e1.~Entity(); Calling desctructor explicitly
}

int main() {
	Function();

	std::cin.get();
}