#include <iostream>

struct Entity {
	static int x, y;

	static void Print() { // Static methods cannot access non-static member
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main() {
	Entity e;
	//e.x = 2; // These values are overwritten as the variables are static
	//e.y = 3;
	Entity::x = 2;
	Entity::x = 3;

	//Entity e1 = { 5, 8 };
	Entity e1;
	/*e1.x = 5;
	e1.y = 8;*/
	Entity::x = 5;
	Entity::y = 8;

	/*e.Print();
	e1.Print();*/
	Entity::Print();
	Entity::Print();

	std::cin.get();
}