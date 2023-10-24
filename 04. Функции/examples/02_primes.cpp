#include <iostream>
#include <cmath>

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	unsigned n;
	std::cout << "Enter a natural number: ";
	std::cin >> n;
	for (unsigned i = 2; i <= n; i++) {
		if (isPrime(i)) {
			std::cout << i << ' ';
		}
	}
	std::cout << std::endl;
	return 0;
}
