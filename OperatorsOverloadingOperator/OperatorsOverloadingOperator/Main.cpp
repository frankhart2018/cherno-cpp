#include <iostream>

struct Vector2 {
	float x, y;

	Vector2(float x, float y) : x(x), y(y) {}

	Vector2 Add(const Vector2& other) const {
		return *this + other; // *this to dereference since it is const reference
		//return operator+(other); // This is an alternative approach
	}

	Vector2 Multiply(const Vector2& other) const {
		return *this * other;
	}

	Vector2 operator+(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator*(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	bool operator==(const Vector2& other) const {
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other) const {
		return !(*this == other);
	}

	void Print() {
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << "(" << other.x << ", " << other.y << ")";
	return stream;
}

int main() {
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result = position.Add(speed.Multiply(powerup));
	result.Print();

	Vector2 result2 = position + speed * powerup;
	std::cout << result2 << std::endl;

	std::cin.get();
}