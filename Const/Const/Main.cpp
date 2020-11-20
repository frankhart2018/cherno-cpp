#include <iostream>

class Entity {
private:
	int m_X, m_Y;
	// In int* m_X, m_Y only m_X is pointer, while m_Y is not

	mutable int var; // This can be modified inside const method
public:
	int GetX() const { // This const works only in class methods
		// cannot do m_X = 2
		return m_X;
	}

	int GetX() {
		return m_X;
	}

	// If the return type of this getter were const int* const GetX const, this means we are returning a pointer that cannot
	// be modified, the contents of the pointer cannot be modified, and the method GetX cannot modify the actual Entity m_X

	void SetX(int x) { 

	}
};

void PrintEntity(const Entity& e) { // const Entity& stops from the object's value to be changed
	std::cout << e.GetX() << std::endl;
}

int main() {
	const int MAX_AGE = 90; // Cannot modify it

	int* a = new int; // If this were a const pointer const int* then we cannot modify the data pointed to the by the pointer
	// If on the other hand it is int* const a then we cannot reassign it to point to any other data
	// If it is const int* const then we cannot change the contents of the data pointed to by the pointer as well as what the 
	// pointer points to

	*a = 2;
	a = (int*)&MAX_AGE;
	std::cout << *a << std::endl;

	std::cin.get();
}