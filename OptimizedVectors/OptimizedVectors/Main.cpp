#include <iostream>
#include <vector>

struct Vertex {
	float x, y, z;

	Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

	Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z) {
		std::cout << "Copied!" << std::endl;
	}
};

int main() {
	std::vector<Vertex> vertices; // By default can take 1
	vertices.reserve(4); // Reserve 3 size
	vertices.push_back(Vertex(1, 2, 3)); // This calls copy constructor once because it is created in main and has to be copied to the vector
	vertices.push_back(Vertex(4, 5, 6));
	vertices.push_back(Vertex(7, 8, 9));

	// Since it has to be resized after 1st push, so during second push has to make two calls to copy constructor
	// And three calls to copy constructor on the third push when the size is increased to 3

	// To construct the object inplace
	vertices.emplace_back(10, 11, 12);

	std::cin.get();
}