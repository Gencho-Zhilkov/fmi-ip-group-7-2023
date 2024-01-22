#include <iostream>
#include <cassert>


bool hasHorisontal(const char **matrix, size_t rows, size_t cols,
	size_t i, size_t j, const char *word) {
	assert (i < rows);

	if (word[0] == '\0') {
		// Стигнали сме до края на думата
		return true;
	} else if (j >= cols || matrix[i][j] != word[0]) {
		// Стигнали сме до края на матрицата или до несъвпадаща буква
		return false;
	} else {
		// Проверяваме нататък
		return hasHorisontal(matrix, rows, cols, i, j + 1, word + 1);
	}
}

bool hasVertical(const char **matrix, size_t rows, size_t cols,
	size_t i, size_t j, const char *word) {
	assert (j < cols);

	if (word[0] == '\0') {
		// Стигнали сме до края на думата
		return true;
	} else if (i >= rows || matrix[i][j] != word[0]) {
		// Стигнали сме до края на матрицата или до несъвпадаща буква
		return false;
	} else {
		// Проверяваме нататък
		return hasVertical(matrix, rows, cols, i + 1, j, word + 1);
	}
}

bool hasWord(const char **matrix, size_t rows, size_t cols, const char *word) {
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			if (hasHorisontal(matrix, rows, cols, i, j, word) ||
				hasVertical(matrix, rows, cols, i, j, word)) {
				return true;
			}
		}
	}
	return false;
}


int main() {
	const char *line1 = "ROTAS";
	const char *line2 = "OPERA";
	const char *line3 = "TENET";
	const char *line4 = "SATOR";
	const char *matrix[] = {line1, line2, line3, line4};

	std::cout << std::boolalpha;
	std::cout << hasWord(matrix, 4, 5, "OPERA") << std::endl;
	std::cout << hasWord(matrix, 4, 5, "TEN") << std::endl;
	std::cout << hasWord(matrix, 4, 5, "TENT") << std::endl;
	std::cout << hasWord(matrix, 4, 5, "RENT") << std::endl;
	return 0;
}
