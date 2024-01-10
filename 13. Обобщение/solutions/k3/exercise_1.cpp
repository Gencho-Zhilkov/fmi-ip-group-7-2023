#include <iostream>


size_t max_steps_reachable(const int steps[], size_t size, size_t i=0) {
	if (i >= size) {
		// Стигнали сме до края на масива
		return size;
	} else if (steps[i] == 0) {
		// Не можем да се придвижим напред
		return i;
	} else {
		// Обхождаме всички възможни следващи клетки и връщаме максимума
		size_t res = 0;
		for (int j = 1; j <= steps[i]; j++) {
			res = std::max(res, max_steps_reachable(steps, size, i+j));
		}
		return res;
	}
}

// Примери от условието
int main() {
	int steps1[] = {1, 1, 1, 1, 1};
	std::cout << max_steps_reachable(steps1, 5) << std::endl;

	int steps2[] = {3, 2, 1, 0, 4};
	std::cout << max_steps_reachable(steps2, 5) << std::endl;

	int steps3[] = {2, 2, 0, 1, 4};
	std::cout << max_steps_reachable(steps3, 5) << std::endl;

	return 0;
}
