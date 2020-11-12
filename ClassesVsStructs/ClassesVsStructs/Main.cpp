#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2 {
	float x, y;

	void Add(const Vec2& other) {
		x += other.x;
		y += other.y;
	}
};

int main() {
	Player player;
	player.x = 5;
	player.Move(1, -1);

	std::cin.get();
}

/*
	If there are only bunch of variables or even if they have methods they just manipulate the variables we can use struct
	If we want data + methods then we can use class
*/