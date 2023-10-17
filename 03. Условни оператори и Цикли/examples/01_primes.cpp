#include <iostream>
#include <cmath>

int main() {
	unsigned n;
	std::cout << "Enter number: ";
	std::cin >> n;

	for (unsigned i = 2; i <= n; i++) {
		bool isPrime = true;
		for (unsigned j = 2; j <= int(sqrt(i)); j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << i << ' ';
		}
	}

	std::cout << std::endl;
	return 0;
}
