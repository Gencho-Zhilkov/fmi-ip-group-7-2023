#include <iostream>


int maxSum(int *numbers, size_t size) {
	if (size == 0) {
		return 0;
	} else if (size == 1) {
		return std::max(numbers[0], 0);
	} else {
		return std::max(maxSum(numbers, size - 1),
			numbers[size - 1] + maxSum(numbers, size - 2));
	}
}


int main() {
	int numbers[] = {2, 7, 9, 3, 1};
	std::cout << maxSum(numbers, 5) << std::endl;
	return 0;
}
