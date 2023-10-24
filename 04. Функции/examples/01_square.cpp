#include <iostream>

unsigned square(unsigned n) {
	return n * n;
}

int main() {
	unsigned n;
	std::cout << "Enter a natural number: ";
	std::cin >> n;
	for (unsigned i = 1; i <= n; i ++) {
		std::cout << square(i) << std::endl;
	}
	return 0;
}
