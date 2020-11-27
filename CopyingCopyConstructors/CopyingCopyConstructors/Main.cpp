#include <iostream>

struct Vector2 {
	float x, y;
};

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string) {
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	//String(const String& other) = delete; // Delete the copy constructor that C++ provides that does shallow copy
	
	String(const String& other) : m_Size(other.m_Size) { // This is deepcopy
		std::cout << "Copied string" << std::endl;

		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String() {
		delete[] m_Buffer; 
	}

	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);  // Will be able to access private members
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String& string) {
	std::cout << string << std::endl;
}

int main() {
	int a = 2;
	int b = a; // Copy
	b = 3; // a still == 2

	Vector2 a1 = { 2, 1 };
	Vector2 b1 = a1; // Copy
	b1.x = 5; // a.x stil == 2

	Vector2* a2 = new Vector2();
	Vector2* b2 = a2;
	b2->x = 2; // Will affect a->x too as both of them are pointing to the same memory address

	String string = "Cherno";
	String second = string; // Pointing to the same memory m_Buffer, this is called shallow copy

	second[2] = 'a';

	//std::cout << string << std::endl;
	//std::cout << second << std::endl;
	
	// These will also copy the strings, we pass it as const reference so it doesn't copy
	PrintString(string);
	PrintString(second);

	// It is almost always better to pass objects by const reference

	std::cin.get();
}