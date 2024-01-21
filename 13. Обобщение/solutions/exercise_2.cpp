#include <iostream>


unsigned shortest_path(int **board, size_t size, size_t row, size_t col) {
	if (row >= size || col >= size) {
		// Невалидна позиция: извън дъската сме
		return -1u;
	}

	if (board[row][col] != 0) {
		// Невалидна позиция: Или има друга фигура или вече сме били тук
		return -1u;
	}

	if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
		// На границата на дъската, т.е. на "изхода", сме
		return 0;
	}

	// Отбелязваме си, че сме посетили настоящата позиция
	board[row][col] = 1;

	// Пробваме вс. възможности като търсим най-малкия резултат
	const int moves[8][2] = {
		{-2, -1}, {-2, +1}, {-1, -2}, {-1, +2},
		{+1, -2}, {+1, +2}, {+2, -1}, {+2, +1}
	};
	unsigned minLen = -1u;
	for (size_t i = 0; i < 8; i ++) {
		unsigned len = shortest_path(board, size, row + moves[i][0], col + moves[i][1]);
		minLen = std::min(len, minLen);
	}

	// Връщаме дъската в първоначалното ѝ състояние
	board[row][col] = 0;

	// Връщаме най-късия намерен път или -1 ако няма такъв
	return (minLen != -1u) ? minLen + 1: -1u;
}


// Примерно извикване на функцията
int main() {
	int line1[] = {1, 1, 1, 1};
	int line2[] = {0, 0, 0, 1};
	int line3[] = {0, 0, 0, 1};
	int line4[] = {0, 0, 0, 1};

	int *board[] = {line1, line2, line3, line4};
	size_t size = 4;
	size_t row = 2, col = 1;

	std::cout << shortest_path(board, size, row, col) << std::endl;
	return 0;
}
