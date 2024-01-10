#include <iostream>


int longest_path(char **matrix, size_t rows, size_t cols, size_t i, size_t j) {
	if (i >= rows || j >= cols) {
		// Излезли сме извън матрицата
		return -1;
	}

	if (i == rows - 1) {
		// Стигнали сме до края
		return 1;
	}

	const char cell = matrix[i][j];
	if (cell == '#') {
		// Стигнали сме невалидна клетка
		return -1;
	}

	// Отбелязваме си, че сме посетили клетката
	matrix[i][j] = '#';

	// Търсим най-дългия път оттук до края
	int res = -1;
	if (cell == '<' || cell == '.') {
		// Пробвай наляво
		res = std::max(res, longest_path(matrix, rows, cols, i, j-1));
	}
	if (cell == '>' || cell == '.') {
		// Пробвай надясно
		res = std::max(res, longest_path(matrix, rows, cols, i, j+1));
	}
	if (cell == '^' || cell == '.') {
		// Пробвай нагоре
		res = std::max(res, longest_path(matrix, rows, cols, i-1, j));
	}
	if (cell == 'v' || cell == '.') {
		// Пробвай надолу
		res = std::max(res, longest_path(matrix, rows, cols, i+1, j));
	}

	// Възстановяваме си първоначалната стойност
	matrix[i][j] = cell;

	// Ако има път до края, добавяме още една стъпка
	return res == -1 ? res : res + 1;
}

int longest_path(char **matrix, size_t rows, size_t cols) {
	int res = -1;
	for (size_t j = 0; j < cols; j++) {
		res = std::max(res, longest_path(matrix, rows, cols, 0, j));
	}
	return res;
}


// Пример от условието
int main() {
	char row1[] = {'#', '.', '#', '#', '#', '#', '#', '#'};
	char row2[] = {'#', '.', '>', '.', '.', '.', '.', '.'};
	char row3[] = {'#', '#', '.', '.', '#', '#', '#', '.'};
	char row4[] = {'#', '#', '#', '.', '.', '.', '.', '.'};
	char row5[] = {'#', '#', '#', 'v', '#', '#', '#', '#'};
	char row6[] = {'#', '#', '#', '.', '>', '.', '.', '.'};
	char row7[] = {'#', '#', '#', '#', '#', '#', '#', '.'};
	char *matrix[] = { row1, row2, row3, row4, row5, row6, row7 };

	std::cout << longest_path(matrix, 7, 8) << std::endl;
	return 0;
}
