#include <iostream>

int main() {
	int a = -1;
	unsigned b = 0;

	if (a < b) {
		std::cout << "A: " << (a - b) << std::endl;
	} else {
		std::cout << "B: " << (a - b) << std::endl;
	}
	return 0;
}
