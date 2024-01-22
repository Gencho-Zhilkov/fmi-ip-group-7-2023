#include <iostream>


unsigned maxWeightHelper(unsigned **matrix, size_t m, size_t n, size_t i, size_t j) {
	if (i == m - 1 && j == n - 1) {
		// Стигнали сме до долния десен ъгъл.
		return matrix[i][j];
	} else {
		// Взимаме максимума от това да продължим надясно или надолу.
		unsigned goRight = (j < n - 1) ? maxWeightHelper(matrix, m, n, i, j + 1) : 0;
		unsigned goDown = (i < m - 1) ? maxWeightHelper(matrix, m, n, i + 1, j) : 0;
		return matrix[i][j] + std::max(goRight, goDown);
	}
}

unsigned maxWeight(unsigned **matrix, size_t m, size_t n) {
	return maxWeightHelper(matrix, m, n, 0, 0);
}


int main() {
	unsigned line1[] = {1, 1, 1, 1};
	unsigned line2[] = {2, 2, 2, 2};
	unsigned line3[] = {3, 3, 3, 3};
	unsigned line4[] = {4, 4, 4, 4};
	unsigned *matrix[] = {line1, line2, line3, line4};

	std::cout << maxWeight(matrix, 4, 4) << std::endl;
	return 0;
}
