#include <iostream>


int split(unsigned *coins, size_t size, unsigned target) {
	if (target == 0) {
		return 0;
	} else if (size == 0) {
		return -1u;
	} else {
		unsigned res = split(coins, size - 1, target);
		if (coins[size - 1] <= target) {
			unsigned useLast = split(coins, size, target - coins[size - 1]);
			useLast = useLast != -1u ? useLast + 1 : -1u;
			res = std::min(res, useLast);
		}
		return res;
	}
}


int main() {
	unsigned coins[] = {2, 6, 8};

	std::cout << split(coins, 3, 10) << std::endl;
	std::cout << split(coins, 3, 12) << std::endl;
	std::cout << split(coins, 3, 5) << std::endl;

	return 0;
}
