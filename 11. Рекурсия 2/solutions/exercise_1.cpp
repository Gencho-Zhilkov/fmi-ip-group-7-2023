#include <iostream>


unsigned minSteps(unsigned n) {
	if (n < 2) {
		return n;
	} else if (n % 2 == 0) {
		return 1 + minSteps(n / 2);
	} else {
		return 1 + std::min(minSteps(n - 1), minSteps(n + 1));
	}
}


int main() {
	for (unsigned i = 0; i < 10; i ++) {
		std::cout << i << ": " << minSteps(i) << std::endl;
	}
	return 0;
}
