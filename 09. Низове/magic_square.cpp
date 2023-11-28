#include <iostream>

const size_t MAX_SIZE = 100;


bool isMagicSquare(const int matrix[][MAX_SIZE], const size_t n) {
	int diag1 = 0, diag2 = 0;
	for (size_t i = 0; i < n; i ++) {
		diag1 += matrix[i][i];
		diag2 += matrix[i][n-1-i];
	}
	if (diag1 != diag2) {
		return false;
	}

	for (size_t i = 0; i < n; i ++) {
		int rowSum = 0, colSum = 0;
		for (size_t j = 0; j < n; j ++) {
			rowSum += matrix[i][j];
			colSum += matrix[j][i];
		}

		if (rowSum != diag1 || colSum != diag1) {
			return false;
		}
	}

	return true;
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] {
		{1, 14, 15, 4},
		{12, 7, 6, 9},
		{8, 11, 10, 5},
		{13, 2, 3, 16},
	};

	std::cout << std::boolalpha;
	std::cout << isMagicSquare(matrix, 4) << std::endl;
	return 0;
}
