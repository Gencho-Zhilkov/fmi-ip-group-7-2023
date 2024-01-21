#include <iostream>


size_t longest_path(int **board, size_t size, size_t row, size_t col) {
	if (row >= size || col >= size) {
		// Невалидна позиция: извън дъската сме
		return 0;
	}

	if (board[row][col] != 0) {
		// Невалидна позиция: Или има друга фигура или вече сме били тук
		return 0;
	}

	// Отбелязваме си, че сме посетили настоящата позиция
	board[row][col] = 1;

	// Обхождаме възможните следващи позиции и намираме
	// най-дългия път измежду тях
	const int moves[8][2] = {
		{-2, -1}, {-2, +1}, {-1, -2}, {-1, +2},
		{+1, -2}, {+1, +2}, {+2, -1}, {+2, +1}
	};
	size_t maxLen = 0;
	for (size_t i = 0; i < 8; i ++) {
		size_t len = longest_path(board, size, row + moves[i][0], col + moves[i][1]);
		maxLen = std::max(len, maxLen);
	}

	// Връщаме дъската в първоначалното ѝ състояние
	board[row][col] = 0;

	// Връщаме най-дългия намерен път
	return maxLen + 1;
}


// Примерно извикване на функцията
int main() {
	int line1[] = {0, 0, 0, 0};
	int line2[] = {0, 0, 1, 0};
	int line3[] = {0, 0, 1, 0};
	int line4[] = {0, 0, 0, 0};

	int *board[] = {line1, line2, line3, line4};
	size_t size = 4;
	size_t row = 0, col = 0;

	std::cout << longest_path(board, size, row, col) << std::endl;
	return 0;
}
