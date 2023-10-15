#include <iostream>
#include <cmath>

int main() {
	unsigned number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	for (unsigned n = 2; n <= number; n++) {
		bool isPrime = true;
		for (unsigned i = 2; i <= int(sqrt(n)); i++) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << n << ' ';
		}
	}

	std::cout << std::endl;
	return 0;
}
