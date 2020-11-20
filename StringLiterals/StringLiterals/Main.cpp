#include <iostream>
#include <string>

#include <stdlib.h>

int main() {
	using namespace std::string_literals;

	/*std::string name0 = "Cherno"s + " hello";*/
	std::u32string name0 = U"Cherno"s + U" hello";

	const char* example = R"(Line
Line2
Line 3)";

	std::cout << example << std::endl;

	"Cherno"; // String literal

	const char name[8] = u8"Che\0rno";
	std::cout << strlen(name) << std::endl; // Will print 3

	const wchar_t* name2 = L"Cherno";
	const char16_t* name3 = u"Cherno";
	const char32_t* name4 = U"Cherno";

	std::cin.get();
}